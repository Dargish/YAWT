#if defined _WIN32
#define EXPORT __declspec(dllexport)
#define IMPORT __declspec(dllimport)
#elif defined _GCC
#define EXPORT __attribute__((visibility("default")))
#define IMPORT
#endif

#if defined RENDERER_EXPORT
#define RENDERERAPI EXPORT
#else
#define RENDERERAPI IMPORT
#endif