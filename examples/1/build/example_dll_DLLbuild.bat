set PATH=C:\Program Files (x86)\mingw-w64\i686-8.1.0-win32-dwarf-rt_v6-rev0\mingw32\bin;%PATH%
g++ -c -DBUILDING_EXAMPLE_DLL example_dll.cpp
g++ -shared -o example_dll.dll example_dll.o -Wl,--out-implib,libexample_dll.a