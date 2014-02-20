#! /bin/sh
make clean
make test
./test
gcov test.c
cat test.c.gcov
#gcovr -r . --html -o code_cov.html
