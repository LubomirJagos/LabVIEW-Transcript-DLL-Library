set PATH=C:\Program Files\mingw-w64\x86_64-8.1.0-posix-seh-rt_v6-rev0\mingw64\bin;%PATH%
g++ -c example_2_DLLtest.cpp
g++ -o example_2_DLLtest.exe example_2_DLLtest.o -L. -lexample_2