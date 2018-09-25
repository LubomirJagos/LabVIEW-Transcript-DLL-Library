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
long EXAMPLE_DLL LVSubVI_Sqaure_Number(long number_in );
long EXAMPLE_DLL LVSubVI_sign(long number_in );


#ifdef __cplusplus
}
#endif

#endif //this end is to finish start