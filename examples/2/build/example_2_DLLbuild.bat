set PATH=C:\Program Files\mingw-w64\x86_64-8.1.0-posix-seh-rt_v6-rev0\mingw64\bin;%PATH%
g++ -c -DBUILDING_EXAMPLE_DLL example_2.cpp
g++ -shared -o example_2.dll example_2.o -Wl,--out-implib,libexample_2.a