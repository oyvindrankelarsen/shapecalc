# Shapecalc
The main goal is to utilize Google Test (.cpp) to test the c code.

# Project Description
This project is part of my studies in "Software Development and Autonomous Vehicles".
The code consists of two parts, firstly calculating the area and the circumfence of different shapes and secondly to act as a calculator.

# License
GPLv3. See LICENSE.

# How to install and run the project

Navigate to the directory where you want to install shapecalc.
Then in a terminal run:

"git clone https://github.com/oyvindrankelarsen/shapecalc.git".

To compile with mingw (on windows) run "mingw32-make DEBUG=1" which is equal to mingw32-make. (See the Makefile).
The files are found in the ./debug folder.

"mingw32-make DEBUG=0" compiles optimized for release and the files are found in the ./release folder.

Before the next compile run "mingw32-make clean".

# Credits

safeinput is made by Stefan Holmberg (stefan.holmberg@systementor.se)

# Tests

To run the tests run "mingw32-make test".
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
