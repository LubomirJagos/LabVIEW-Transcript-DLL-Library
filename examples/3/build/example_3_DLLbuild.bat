set PATH=C:\Program Files\mingw-w64\x86_64-8.1.0-posix-seh-rt_v6-rev0\mingw64\bin;%PATH%
g++ -c -DBUILDING_EXAMPLE_DLL example_3.cpp
g++ -shared -o example_3.dll example_3.o -Wl,--out-implib,libexample_3.a