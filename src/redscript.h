#include <stdint.h>

struct Decompilation;
struct ScriptBundle;

extern "C" struct ScriptBundle* bundle_load(const char* path);
extern "C" void bundle_free(struct ScriptBundle* bundle);

extern "C" struct Decompilation* decompile_global(struct ScriptBundle* bundle, const char* name);
extern "C" struct Decompilation* decompile_method(struct ScriptBundle* bundle, const char* parent, const char* name);

extern "C" const char* decompilation_code(const struct Decompilation* decompilation);
extern "C" const uint32_t* decompilation_line_mapping(const struct Decompilation* decompilation);
extern "C" uint32_t decompilation_line_count(const struct Decompilation* decompilation);
extern "C" void decompilation_free(struct Decompilation* bundle);
