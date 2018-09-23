set PATH=C:\Program Files\mingw-w64\x86_64-8.1.0-posix-seh-rt_v6-rev0\mingw64\bin;%PATH%
g++ -c -DBUILDING_EXAMPLE_DLL example_dll.cpp
g++ -shared -o example_dll.dll example_dll.o -Wl,--out-implib,libexample_dll.a