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

long EXAMPLE_DLL LVSubVI_Double(long number_in );
void EXAMPLE_DLL _stdcall LVSubVI_CppFunc();
void EXAMPLE_DLL _stdcall LVSubVI_SimpleFunc2(long cyclesCnt );


#ifdef __cplusplus
}
#endif

#endif //this end is to finish start