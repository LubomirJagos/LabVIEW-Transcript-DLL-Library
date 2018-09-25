set PATH=C:\Program Files (x86)\mingw-w64\i686-8.1.0-win32-dwarf-rt_v6-rev0\mingw32\bin;%PATH%
g++ -c -DBUILDING_EXAMPLE_DLL example_3.cpp
g++ -shared -o example_3.dll example_3.o -Wl,--out-implib,libexample_3.a