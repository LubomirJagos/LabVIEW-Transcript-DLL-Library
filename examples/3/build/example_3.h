#ifndef EXAMPLE_DLL_H
#define EXAMPLE_DLL_H

#ifdef __cplusplus
extern "C" {
#endif

#ifdef BUILDING_EXAMPLE_DLL
#define EXAMPLE_DLL __declspec(dllexport)
#else
#define EXAMPLE_DLL __declspec(dllimport)
#endif

void EXAMPLE_DLL _stdcall LVSubVI_gameFunc();


#ifdef __cplusplus
}
#endif

#endif //this end is to finish start