#ifndef DLL_H
#define DLL_H

#ifdef DLL_MODULE_EXPORTS
#define DLL_API __declspec(dllexport)
#else
#define DLL_API __declspec(dllimport)
#endif

DLL_API int* GetDllLinkedLibGlobalPtr();

#endif // DLL_H