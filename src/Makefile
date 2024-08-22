CC = gcc
CFLAGS = -Wall -Wextra -Werror -std=c11
FLAG_COV = -lcheck -lgcov -fprofile-arcs --coverage
OSNAME=$(shell uname)

ifeq (${OSNAME}, Linux)
FLAGS_L = -lcheck -lm -lpthread -lrt -lsubunit
else
FLAGS_L = -lcheck
endif

all: test

s21_math.a:
	$(CC) $(CFLAGS) -c s21_math.c s21_math.h 
	ar rcs s21_math.a s21_math.o
	ranlib s21_math.a
	rm -rf s21_math.o
	rm -rf s21_math.h.gch

clean:
	rm -rf s21_math
	rm -rf *.gcda
	rm -rf *.gcno
	rm -rf report
	rm -rf gcov_report.info
	rm -rf s21_math.o
	rm -rf s21_math.h.gch
	rm -rf s21_math.a
	rm -rf test

test: clean s21_math.a
	$(CC) tests_s21_math.c s21_math.a $(FLAGS_L) -o test
	./test

gcov_report: clean 
	$(CC) tests_s21_math.c s21_math.c $(FLAGS_L) -o test $(FLAG_COV) 
	./test
	lcov -t "gcov_report" -o gcov_report.info -c -d ./
	genhtml -o report gcov_report.info;
	open report/index.html
	rm -rf *.gcda
	rm -rf *.gcno