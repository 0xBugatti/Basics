/*Static  lib : all Code Compiled and loaded in execution , Affect performance , Affect memory usage , not shareable
Dynamic lib :called  Code only Compiled and loaded in execution , improve performance , improve memory usage , shareable
.h or .lib
SO on Linux (gcc)
gcc code.c -lm -o lib2.21-qw.so -shared -fpic

Dlls on Windows (Visual Studio)

Can BE linked in Combile Time Vs in Runtime
