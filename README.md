# Shapecalc




# Tests
```
PS D:\OneDrive\C\shapecalc> mingw32-make test
gcc -Wall -Werror -std=c11 -g   -c -o rockpaperscissors.o rockpaperscissors.c
g++ -o check.exe calc.o Testcalc.o shape.o Testshape.o rockpaperscissors.o Testrpc.o safeinput.o -Wall -Werror -std=c11 -g -I gtest C:\msys64\mingw64\lib\libgtest_main.a C:\msys64\mingw64\lib\libgtest.a
./check.exe
Running main() from C:/M/mingw-w64-gtest/src/googletest-release-1.12.1/googletest/src/gtest_main.cc
[==========] Running 18 tests from 3 test suites.
[----------] Global test environment set-up.
[----------] 9 tests from rpcTest
[ RUN      ] rpcTest.checkwinstieslossesplayer1computer2
[       OK ] rpcTest.checkwinstieslossesplayer1computer2 (0 ms)
[ RUN      ] rpcTest.checkwinstieslossesplayer3computer1
[       OK ] rpcTest.checkwinstieslossesplayer3computer1 (0 ms)
[ RUN      ] rpcTest.checkwinstieslossesplayer2computer3
[       OK ] rpcTest.checkwinstieslossesplayer2computer3 (0 ms)
[ RUN      ] rpcTest.checkwinstieslossesplayer1computer1
[       OK ] rpcTest.checkwinstieslossesplayer1computer1 (0 ms)
[ RUN      ] rpcTest.checkwinstieslossesplayer2computer2
[       OK ] rpcTest.checkwinstieslossesplayer2computer2 (0 ms)
[ RUN      ] rpcTest.checkwinstieslossesplayer3computer3
[       OK ] rpcTest.checkwinstieslossesplayer3computer3 (0 ms)
[ RUN      ] rpcTest.checkwinstieslossesplayer2computer1
[       OK ] rpcTest.checkwinstieslossesplayer2computer1 (0 ms)
[ RUN      ] rpcTest.checkwinstieslossesplayer1computer3
[       OK ] rpcTest.checkwinstieslossesplayer1computer3 (0 ms)
[ RUN      ] rpcTest.checkwinstieslossesplayer3computer2
[       OK ] rpcTest.checkwinstieslossesplayer3computer2 (0 ms)
[----------] 9 tests from rpcTest (45 ms total)

[----------] 4 tests from shapeTest
[ RUN      ] shapeTest.checkareaandcircumferenceforrectangle
[       OK ] shapeTest.checkareaandcircumferenceforrectangle (0 ms)
[ RUN      ] shapeTest.checkareaandcircumferenceforparallellogram
[       OK ] shapeTest.checkareaandcircumferenceforparallellogram (0 ms)
[ RUN      ] shapeTest.checkareaandcircumferencefortriangle
[       OK ] shapeTest.checkareaandcircumferencefortriangle (0 ms)
[ RUN      ] shapeTest.checkareaandcircumferenceforcirkle
[       OK ] shapeTest.checkareaandcircumferenceforcirkle (0 ms)
[----------] 4 tests from shapeTest (22 ms total)

[----------] 5 tests from calcTest
[ RUN      ] calcTest.Checkthatthecalculatorcanaddtwonumbers
[       OK ] calcTest.Checkthatthecalculatorcanaddtwonumbers (0 ms)
[ RUN      ] calcTest.Checkthatthecalculatorcansubtracttwonumbers
[       OK ] calcTest.Checkthatthecalculatorcansubtracttwonumbers (0 ms)
[ RUN      ] calcTest.Checkthatthecalculatorcanmultiplytwonumbers
[       OK ] calcTest.Checkthatthecalculatorcanmultiplytwonumbers (0 ms)
[ RUN      ] calcTest.Checkthatthecalculatorcandividetwonumbers
[       OK ] calcTest.Checkthatthecalculatorcandividetwonumbers (0 ms)
[ RUN      ] calcTest.Checkthatthecalculatorcantheremainderoftwonumbers
[       OK ] calcTest.Checkthatthecalculatorcantheremainderoftwonumbers (0 ms)
[----------] 5 tests from calcTest (29 ms total)

[----------] Global test environment tear-down
[==========] 18 tests from 3 test suites ran. (114 ms total)
[  PASSED  ] 18 tests.

```