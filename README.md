# googletest_factorial

Simple test app for evaluating googletest with eclipse CDT


### Adding googletest library

```bash
...gtest/gtest-1.7.0$ ./scripts/fuse_gtest_files.py . ../project/gtest_src/

This will copy gtest.h and gtest-all.cc into the test project


### Setting up the runtime environment

factorial_unit_test -> Properties -> C++ Linker -> -> Libraries -> Libraries(-l) -> add -> "pthread"

factorial_unit_test/test -> Properties -> C/C++ Build -> Setting -> Cross G++ Compiler -> includes -> include paths (-l)
add -> workspace -> factorial/include & gtest_src

factorial_unit_test/gtest_src -> Properties -> C/C++ Build -> Setting -> Cross G++ Compiler -> includes -> include paths (-l) -> add -> workspace -> gtest_src


### Build and run

Project -> Build All or ctrl+B

Run -> Run or ctrl +f11


### Sample output

```bash
./factorial_unit_test 
Running main() from gtest_main.cc
[==========] Running 4 tests from 1 test case.
[----------] Global test environment set-up.
[----------] 4 tests from IntegerFunctionTest
[ RUN      ] IntegerFunctionTest.positive
[       OK ] IntegerFunctionTest.positive (0 ms)
[ RUN      ] IntegerFunctionTest.negative
[       OK ] IntegerFunctionTest.negative (0 ms)
[ RUN      ] IntegerFunctionTest.intentional_fail
../test/test_factorial.cpp:27: Failure
Value of: factorial(0)
Actual: 1
Expected: 6
[  FAILED  ] IntegerFunctionTest.intentional_fail (0 ms)
[ RUN      ] IntegerFunctionTest.declared_value
[       OK ] IntegerFunctionTest.declared_value (0 ms)
[----------] 4 tests from IntegerFunctionTest (0 ms total)

[----------] Global test environment tear-down
[==========] 4 tests from 1 test case ran. (0 ms total)
[  PASSED  ] 3 tests.
[  FAILED  ] 1 test, listed below:
[  FAILED  ] IntegerFunctionTest.intentional_fail

1 FAILED TEST
  YOU HAVE 1 DISABLED TEST
