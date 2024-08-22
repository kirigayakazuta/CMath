#include <check.h>
#include <math.h>
#include <stdlib.h>

#include "s21_math.h"

// Тесты для функции -- s21_abs(x)
START_TEST(s21_abs_test1) { ck_assert_int_eq(s21_abs(10), abs(10)); }
END_TEST

START_TEST(s21_abs_test2) { ck_assert_int_eq(s21_abs(-10), abs(-10)); }
END_TEST

START_TEST(s21_abs_test3) {
  ck_assert_int_eq(s21_abs((int)INFINITY), abs((int)INFINITY));
}
END_TEST

START_TEST(s21_abs_test4) {
  ck_assert_int_eq(s21_abs((int)-INFINITY), abs((int)-INFINITY));
}
END_TEST

START_TEST(s21_abs_test5) {
  ck_assert_int_eq(s21_abs((int)NAN), abs((int)NAN));
}
END_TEST

// Тесты для функции -- s21_fabs(double x)
START_TEST(s21_fabs_test1) {
  ck_assert_ldouble_eq_tol(s21_fabs(231.34), fabs(231.34), 0.000001);
}
END_TEST

START_TEST(s21_fabs_test2) {
  ck_assert_ldouble_eq_tol(s21_fabs(-12345.4563), fabs(-12345.4563), 0.000001);
}
END_TEST

START_TEST(s21_fabs_test3) {
  ck_assert_ldouble_eq(s21_fabs(INFINITY), fabs(INFINITY));
}
END_TEST

START_TEST(s21_fabs_test4) {
  ck_assert_ldouble_eq(s21_fabs(INFINITY), fabs(INFINITY));
}
END_TEST

START_TEST(s21_fabs_test5) {
  ck_assert_ldouble_eq(s21_fabs(-INFINITY), fabs(-INFINITY));
}
END_TEST

START_TEST(s21_fabs_test6) {
  ck_assert_ldouble_nan(s21_fabs(NAN));
  ck_assert_ldouble_nan(fabs(NAN));
}
END_TEST

START_TEST(s21_fabs_test7) {
  ck_assert_ldouble_eq_tol(s21_fabs(0.456), fabs(0.456), 0.000001);
}
END_TEST

START_TEST(s21_fabs_test8) {
  ck_assert_ldouble_eq_tol(s21_fabs(-54.456), fabs(-54.456), 0.000001);
}
END_TEST

START_TEST(s21_fabs_test9) {
  ck_assert_ldouble_eq_tol(s21_fabs(-0.1), fabs(-0.1), 0.000001);
}
END_TEST

START_TEST(s21_fabs_test10) {
  ck_assert_ldouble_eq_tol(s21_fabs(1), fabs(1), 0.000001);
}
END_TEST

// Тесты для функции -- s21_exp(double x);
START_TEST(s21_exp_test1) {
  ck_assert_ldouble_eq(s21_exp(76159.145), exp(76159.145));
}
END_TEST

START_TEST(s21_exp_test2) {
  ck_assert_ldouble_eq_tol(s21_exp(-76.01), exp(-76.01), 0.000001);
}
END_TEST

START_TEST(s21_exp_test3) {
  ck_assert_ldouble_eq(s21_exp(INFINITY), exp(INFINITY));
}
END_TEST

START_TEST(s21_exp_test4) {
  ck_assert_ldouble_eq(s21_exp(-INFINITY), exp(-INFINITY));
}
END_TEST

START_TEST(s21_exp_test5) {
  ck_assert_ldouble_nan(s21_exp(NAN));
  ck_assert_ldouble_nan(exp(NAN));
}
END_TEST

START_TEST(s21_exp_test6) {
  ck_assert_ldouble_eq_tol(s21_exp(1), exp(1), 0.000001);
}
END_TEST

START_TEST(s21_exp_test7) {
  ck_assert_ldouble_eq_tol(s21_exp(-1.0), exp(-1.0), 0.000001);
}
END_TEST

START_TEST(s21_exp_test8) {
  ck_assert_ldouble_eq_tol(s21_exp(0), exp(0), 0.000001);
}
END_TEST

START_TEST(s21_exp_test9) {
  ck_assert_ldouble_eq_tol(s21_exp(0.123), exp(0.123), 0.000001);
}
END_TEST

START_TEST(s21_exp_test10) {
  ck_assert_ldouble_eq_tol(s21_exp(-0.123), exp(-0.123), 0.000001);
}
END_TEST

// Тесты для функции -- s21_log(double x);
START_TEST(s21_log_test1) {
  ck_assert_ldouble_eq_tol(s21_log(76159.145), log(76159.145), 0.000001);
}
END_TEST

START_TEST(s21_log_test2) {
  ck_assert_ldouble_nan(s21_log(-INFINITY));
  ck_assert_ldouble_nan(log(-INFINITY));
}
END_TEST

START_TEST(s21_log_test3) {
  ck_assert_ldouble_nan(s21_log(NAN));
  ck_assert_ldouble_nan(log(NAN));
}
END_TEST

START_TEST(s21_log_test4) {
  ck_assert_ldouble_eq(s21_log(INFINITY), log(INFINITY));
}
END_TEST

START_TEST(s21_log_test5) { ck_assert_ldouble_eq(s21_log(1), log(1)); }
END_TEST

START_TEST(s21_log_test6) {
  ck_assert_ldouble_eq_tol(s21_log(1.123), log(1.123), 0.000001);
}
END_TEST

START_TEST(s21_log_test7) { ck_assert_ldouble_eq(s21_log(0), log(0)); }
END_TEST

START_TEST(s21_log_test8) {
  ck_assert_ldouble_eq_tol(s21_log(1231.123), log(1231.123), 0.000001);
}
END_TEST

START_TEST(s21_log_test9) {
  ck_assert_ldouble_eq_tol(s21_log(26941.28), log(26941.28), 0.000001);
}
END_TEST

START_TEST(s21_log_test10) {
  ck_assert_ldouble_nan(s21_log(-1));
  ck_assert_ldouble_nan(log(-1));
}
END_TEST

// Тесты для функции -- s21_pow(double base, double exp);
START_TEST(s21_pow_test1) {
  ck_assert_ldouble_eq(s21_pow(INFINITY, INFINITY), pow(INFINITY, INFINITY));
}
END_TEST

START_TEST(s21_pow_test2) {
  ck_assert_ldouble_eq(s21_pow(-INFINITY, -INFINITY),
                       pow(-INFINITY, -INFINITY));
}
END_TEST

START_TEST(s21_pow_test3) {
  ck_assert_ldouble_nan(s21_pow(NAN, NAN));
  ck_assert_ldouble_nan(pow(NAN, NAN));
}
END_TEST

START_TEST(s21_pow_test4) {
  ck_assert_ldouble_nan(s21_pow(INFINITY, NAN));
  ck_assert_ldouble_nan(pow(INFINITY, NAN));
}
END_TEST

START_TEST(s21_pow_test5) {
  ck_assert_ldouble_nan(s21_pow(NAN, INFINITY));
  ck_assert_ldouble_nan(pow(NAN, INFINITY));
}
END_TEST

START_TEST(s21_pow_test6) {
  ck_assert_ldouble_nan(s21_pow(-INFINITY, NAN));
  ck_assert_ldouble_nan(pow(-INFINITY, NAN));
}
END_TEST

START_TEST(s21_pow_test7) {
  ck_assert_ldouble_nan(s21_pow(NAN, -INFINITY));
  ck_assert_ldouble_nan(pow(NAN, -INFINITY));
}
END_TEST

START_TEST(s21_pow_test8) {
  ck_assert_ldouble_eq(s21_pow(-INFINITY, INFINITY), pow(-INFINITY, INFINITY));
}
END_TEST

START_TEST(s21_pow_test9) {
  ck_assert_ldouble_eq(s21_pow(INFINITY, -INFINITY), pow(INFINITY, -INFINITY));
}
END_TEST

START_TEST(s21_pow_test10) {
  ck_assert_ldouble_eq_tol(s21_pow(34.12, 0), pow(34.12, 0), 0.000001);
}
END_TEST

START_TEST(s21_pow_test11) {
  ck_assert_ldouble_eq_tol(s21_pow(-24.1, 4), pow(-24.1, 4), 0.000001);
}
END_TEST

START_TEST(s21_pow_test12) {
  ck_assert_ldouble_eq_tol(s21_pow(-INFINITY, 0), pow(-INFINITY, 0), 0.000001);
}
END_TEST

START_TEST(s21_pow_test13) {
  ck_assert_ldouble_eq_tol(s21_pow(INFINITY, 0), pow(INFINITY, 0), 0.000001);
}
END_TEST

START_TEST(s21_pow_test14) {
  ck_assert_ldouble_eq_tol(s21_pow(NAN, 0), pow(NAN, 0), 0.000001);
}
END_TEST

START_TEST(s21_pow_test15) {
  ck_assert_ldouble_eq(s21_pow(0, -INFINITY), pow(0, -INFINITY));
}
END_TEST

START_TEST(s21_pow_test16) {
  ck_assert_ldouble_eq(s21_pow(0, INFINITY), pow(0, INFINITY));
}
END_TEST

START_TEST(s21_pow_test17) {
  ck_assert_ldouble_nan(s21_pow(0, NAN));
  ck_assert_ldouble_nan(pow(0, NAN));
}
END_TEST

START_TEST(s21_pow_test18) { ck_assert_ldouble_eq(s21_pow(0, 0), pow(0, 0)); }
END_TEST

START_TEST(s21_pow_test19) {
  ck_assert_ldouble_eq(s21_pow(12425.567, 1234), pow(12425.567, 1234));
}
END_TEST

START_TEST(s21_pow_test20) {
  ck_assert_ldouble_eq(s21_pow(-12425.567, 1234), pow(-12425.567, 1234));
}
END_TEST

START_TEST(s21_pow_test21) {
  ck_assert_ldouble_eq_tol(s21_pow(-45.57, 3), pow(-45.57, 3), 0.000001);
}
END_TEST

START_TEST(s21_pow_test22) {
  ck_assert_ldouble_eq_tol(s21_pow(-1.57, -12), pow(-1.57, -12), 0.000001);
}
END_TEST

START_TEST(s21_pow_test23) {
  ck_assert_ldouble_eq(s21_pow(45, 456), pow(45, 456));
}
END_TEST

START_TEST(s21_pow_test24) {
  ck_assert_ldouble_eq_tol(s21_pow(45, 4.1), pow(45, 4.1), 0.000001);
}
END_TEST

START_TEST(s21_pow_test25) {
  ck_assert_ldouble_eq_tol(s21_pow(13, 1.2), pow(13, 1.2), 0.000001);
}
END_TEST

START_TEST(s21_pow_test26) {
  ck_assert_ldouble_eq(s21_pow(0.81, -INFINITY), pow(0.81, -INFINITY));
}
END_TEST

START_TEST(s21_pow_test27) {
  ck_assert_ldouble_eq(s21_pow(1, INFINITY), pow(1, INFINITY));
}
END_TEST

START_TEST(s21_pow_test28) {
  ck_assert_ldouble_nan(s21_pow(NAN, -INFINITY));
  ck_assert_ldouble_nan(pow(NAN, -INFINITY));
}
END_TEST

START_TEST(s21_pow_test29) {
  ck_assert_ldouble_nan(s21_pow(NAN, -7.56));
  ck_assert_ldouble_nan(pow(NAN, -7.56));
}
END_TEST

START_TEST(s21_pow_test30) {
  ck_assert_ldouble_eq(s21_pow(INFINITY, 5.32), pow(INFINITY, 5.32));
}
END_TEST

START_TEST(s21_pow_test31) {
  ck_assert_ldouble_eq(s21_pow(-INFINITY, 5), pow(-INFINITY, 5));
}
END_TEST

START_TEST(s21_pow_test32) {
  ck_assert_ldouble_eq(s21_pow(-INFINITY, 5.32), pow(-INFINITY, 5.32));
}
END_TEST

START_TEST(s21_pow_test33) {
  ck_assert_ldouble_eq(s21_pow(-INFINITY, -5.32), pow(-INFINITY, -5.32));
}
END_TEST

START_TEST(s21_pow_test34) {
  ck_assert_ldouble_eq(s21_pow(INFINITY, -1.02), pow(INFINITY, -1.02));
}
END_TEST

START_TEST(s21_pow_test35) {
  ck_assert_ldouble_eq_tol(s21_pow(1.023, 1.02), pow(1.023, 1.02), 0.000001);
}
END_TEST

START_TEST(s21_pow_test36) {
  ck_assert_ldouble_eq(s21_pow(0, -7.69), pow(0, -7.69));
}
END_TEST

START_TEST(s21_pow_test37) {
  ck_assert_ldouble_eq(s21_pow(1, -INFINITY), pow(1, -INFINITY));
}
END_TEST

START_TEST(s21_pow_test38) {
  ck_assert_ldouble_eq_tol(s21_pow(0, 8.45), pow(0, 8.45), 0.000001);
}
END_TEST

START_TEST(s21_pow_test39) {
  ck_assert_ldouble_nan(s21_pow(-7.86, 4.51));
  ck_assert_ldouble_nan(pow(-7.86, 4.51));
}
END_TEST

START_TEST(s21_pow_test40) {
  ck_assert_ldouble_nan(s21_pow(NAN, 5.67));
  ck_assert_ldouble_nan(pow(NAN, 5.67));
}
END_TEST

// Тесты для функции -- s21_sqrt(double x);
START_TEST(s21_sqrt_test1) {
  ck_assert_ldouble_eq(s21_sqrt(INFINITY), sqrt(INFINITY));
}
END_TEST

START_TEST(s21_sqrt_test2) {
  ck_assert_ldouble_nan(s21_sqrt(NAN));
  ck_assert_ldouble_nan(sqrt(NAN));
}
END_TEST

START_TEST(s21_sqrt_test3) {
  ck_assert_ldouble_nan(s21_sqrt(-INFINITY));
  ck_assert_ldouble_nan(sqrt(-INFINITY));
}
END_TEST

START_TEST(s21_sqrt_test4) {
  ck_assert_ldouble_eq_tol(s21_sqrt(4567.542), sqrt(4567.542), 0.000001);
}
END_TEST

START_TEST(s21_sqrt_test5) {
  ck_assert_ldouble_eq_tol(s21_sqrt(54777.5), sqrt(54777.5), 0.000001);
}
END_TEST

START_TEST(s21_sqrt_test6) {
  ck_assert_ldouble_eq_tol(s21_sqrt(123.5), sqrt(123.5), 0.000001);
}
END_TEST

START_TEST(s21_sqrt_test7) {
  ck_assert_ldouble_eq_tol(s21_sqrt(0.545), sqrt(0.545), 0.000001);
}
END_TEST

START_TEST(s21_sqrt_test8) {
  ck_assert_ldouble_eq_tol(s21_sqrt(60), sqrt(60), 0.000001);
}
END_TEST

START_TEST(s21_sqrt_test9) {
  ck_assert_ldouble_eq_tol(s21_sqrt(0.25), sqrt(.25), 0.000001);
}
END_TEST

START_TEST(s21_sqrt_test10) {
  ck_assert_ldouble_eq_tol(s21_sqrt(0), sqrt(0), 0.000001);
}
END_TEST

START_TEST(s21_sqrt_test11) {
  ck_assert_ldouble_eq_tol(s21_sqrt(0.0001), sqrt(0.0001), 0.000001);
}
END_TEST

START_TEST(s21_sqrt_test12) {
  ck_assert_ldouble_eq_tol(s21_sqrt(0.01231), sqrt(0.01231), 0.000001);
}
END_TEST

START_TEST(s21_sqrt_test13) {
  ck_assert_ldouble_eq_tol(s21_sqrt(1.231), sqrt(1.231), 0.000001);
}
END_TEST

START_TEST(s21_sqrt_test14) {
  ck_assert_ldouble_eq_tol(s21_sqrt(5097.545), sqrt(5097.545), 0.000001);
}
END_TEST

START_TEST(s21_sqrt_test15) {
  ck_assert_ldouble_nan(s21_sqrt(-631.451));
  ck_assert_ldouble_nan(sqrt(-631.451));
}
END_TEST

// Тесты для функции -- s21_ceil(double x);
START_TEST(s21_ceil_test1) {
  ck_assert_ldouble_eq_tol(s21_ceil(-0.1), ceil(-0.1), 0.000001);
}
END_TEST

START_TEST(s21_ceil_test2) {
  ck_assert_ldouble_eq_tol(s21_ceil(-123.3), ceil(-123.3), 0.000001);
}
END_TEST

START_TEST(s21_ceil_test3) {
  ck_assert_ldouble_eq(s21_ceil(-INFINITY), ceil(-INFINITY));
}
END_TEST

START_TEST(s21_ceil_test4) {
  ck_assert_ldouble_eq(s21_ceil(INFINITY), ceil(INFINITY));
}
END_TEST

START_TEST(s21_ceil_test5) {
  ck_assert_ldouble_nan(s21_ceil(NAN));
  ck_assert_ldouble_nan(ceil(NAN));
}
END_TEST

START_TEST(s21_ceil_test6) {
  ck_assert_ldouble_eq_tol(s21_ceil(20), ceil(20), 0.000001);
}
END_TEST

START_TEST(s21_ceil_test7) {
  ck_assert_ldouble_eq_tol(s21_ceil(20.45), ceil(20.45), 0.000001);
}
END_TEST

START_TEST(s21_ceil_test8) {
  ck_assert_ldouble_eq_tol(s21_ceil(-1.1), ceil(-1.1), 0.000001);
}
END_TEST

START_TEST(s21_ceil_test9) {
  ck_assert_ldouble_eq_tol(s21_ceil(0.123), ceil(0.123), 0.000001);
}
END_TEST

START_TEST(s21_ceil_test10) {
  ck_assert_ldouble_eq_tol(s21_ceil(-0.123), ceil(-0.123), 0.000001);
}
END_TEST

// Тесты для функции -- s21_floor(double x);
START_TEST(s21_floor_test1) {
  ck_assert_ldouble_eq_tol(s21_floor(-0.5), floor(-0.5), 0.000001);
}
END_TEST

START_TEST(s21_floor_test2) {
  ck_assert_ldouble_eq_tol(s21_floor(0.5), floor(0.5), 0.000001);
}
END_TEST

START_TEST(s21_floor_test3) {
  ck_assert_ldouble_eq_tol(s21_floor(-14.55), floor(-14.55), 0.000001);
}
END_TEST

START_TEST(s21_floor_test4) {
  ck_assert_ldouble_eq(s21_floor(INFINITY), floor(INFINITY));
}
END_TEST

START_TEST(s21_floor_test5) {
  ck_assert_ldouble_eq(s21_floor(-INFINITY), floor(-INFINITY));
}
END_TEST

START_TEST(s21_floor_test6) {
  ck_assert_ldouble_nan(s21_floor(NAN));
  ck_assert_ldouble_nan(floor(NAN));
}
END_TEST

START_TEST(s21_floor_test7) {
  ck_assert_ldouble_eq_tol(s21_floor(-4300), floor(-4300), 0.000001);
}
END_TEST

START_TEST(s21_floor_test8) {
  ck_assert_ldouble_eq_tol(s21_floor(0.432), floor(0.432), 0.000001);
}
END_TEST

START_TEST(s21_floor_test9) {
  ck_assert_ldouble_eq_tol(s21_floor(10.87), floor(10.87), 0.000001);
}
END_TEST

START_TEST(s21_floor_test10) {
  ck_assert_ldouble_eq_tol(s21_floor(-10.87), floor(-10.87), 0.000001);
}
END_TEST

// Тесты для функции -- s21_fmod(double x, double y);
START_TEST(s21_fmod_test1) {
  ck_assert_ldouble_nan(s21_fmod(NAN, NAN));
  ck_assert_ldouble_nan(fmod(NAN, NAN));
}
END_TEST

START_TEST(s21_fmod_test2) {
  ck_assert_ldouble_nan(s21_fmod(-INFINITY, -INFINITY));
  ck_assert_ldouble_nan(fmod(-INFINITY, -INFINITY));
}
END_TEST

START_TEST(s21_fmod_test3) {
  ck_assert_ldouble_nan(s21_fmod(INFINITY, -INFINITY));
  ck_assert_ldouble_nan(fmod(INFINITY, -INFINITY));
}
END_TEST

START_TEST(s21_fmod_test4) {
  ck_assert_ldouble_nan(s21_fmod(-INFINITY, INFINITY));
  ck_assert_ldouble_nan(fmod(-INFINITY, INFINITY));
}
END_TEST

START_TEST(s21_fmod_test5) {
  ck_assert_ldouble_nan(s21_fmod(INFINITY, INFINITY));
  ck_assert_ldouble_nan(fmod(INFINITY, INFINITY));
}
END_TEST

START_TEST(s21_fmod_test6) {
  ck_assert_ldouble_nan(s21_fmod(NAN, INFINITY));
  ck_assert_ldouble_nan(fmod(NAN, INFINITY));
}
END_TEST

START_TEST(s21_fmod_test7) {
  ck_assert_ldouble_nan(s21_fmod(NAN, -INFINITY));
  ck_assert_ldouble_nan(fmod(NAN, -INFINITY));
}
END_TEST

START_TEST(s21_fmod_test8) {
  ck_assert_ldouble_nan(s21_fmod(-INFINITY, NAN));
  ck_assert_ldouble_nan(fmod(-INFINITY, NAN));
}
END_TEST

START_TEST(s21_fmod_test9) {
  ck_assert_ldouble_nan(s21_fmod(INFINITY, NAN));
  ck_assert_ldouble_nan(fmod(INFINITY, NAN));
}
END_TEST

START_TEST(s21_fmod_test10) {
  ck_assert_ldouble_nan(s21_fmod(INFINITY, 1));
  ck_assert_ldouble_nan(fmod(INFINITY, 1));
}
END_TEST

START_TEST(s21_fmod_test11) {
  ck_assert_ldouble_nan(s21_fmod(0, NAN));
  ck_assert_ldouble_nan(fmod(0, NAN));
}
END_TEST

START_TEST(s21_fmod_test12) {
  ck_assert_ldouble_nan(s21_fmod(NAN, 10));
  ck_assert_ldouble_nan(fmod(NAN, 10));
}
END_TEST

START_TEST(s21_fmod_test13) {
  ck_assert_ldouble_nan(s21_fmod(-INFINITY, 1));
  ck_assert_ldouble_nan(fmod(-INFINITY, 1));
}
END_TEST

START_TEST(s21_fmod_test14) {
  ck_assert_ldouble_eq_tol(s21_fmod(1234, 10), fmod(1234, 10), 0.000001);
}
END_TEST

START_TEST(s21_fmod_test15) {
  ck_assert_ldouble_eq_tol(s21_fmod(-20, 1.435), fmod(-20, 1.435), 0.000001);
}
END_TEST

START_TEST(s21_fmod_test16) {
  ck_assert_ldouble_eq_tol(s21_fmod(1, 83), fmod(1, 83), 0.000001);
}
END_TEST

START_TEST(s21_fmod_test17) {
  ck_assert_ldouble_eq_tol(s21_fmod(112, 83), fmod(112, 83), 0.000001);
}
END_TEST

START_TEST(s21_fmod_test18) {
  ck_assert_ldouble_eq_tol(s21_fmod(0.234, 1.2), fmod(0.234, 1.2), 0.000001);
}
END_TEST

START_TEST(s21_fmod_test19) {
  ck_assert_ldouble_eq_tol(s21_fmod(0, 1.2), fmod(0, 1.2), 0.000001);
}
END_TEST

START_TEST(s21_fmod_test20) {
  ck_assert_ldouble_eq_tol(s21_fmod(-756, 123), fmod(-756, 123), 0.000001);
}
END_TEST

START_TEST(s21_fmod_test21) {
  ck_assert_ldouble_nan(s21_fmod(-INFINITY, 2));
  ck_assert_ldouble_nan(fmod(-INFINITY, 2));
}
END_TEST

START_TEST(s21_fmod_test22) {
  ck_assert_ldouble_nan(s21_fmod(INFINITY, 12));
  ck_assert_ldouble_nan(fmod(INFINITY, 12));
}
END_TEST

START_TEST(s21_fmod_test23) {
  ck_assert_ldouble_nan(s21_fmod(INFINITY, 12));
  ck_assert_ldouble_nan(fmod(INFINITY, 12));
}
END_TEST

START_TEST(s21_fmod_test24) {
  ck_assert_ldouble_eq(s21_fmod(100, -INFINITY), fmod(100, -INFINITY));
}
END_TEST

START_TEST(s21_fmod_test25) {
  ck_assert_ldouble_eq(s21_fmod(0.1, -INFINITY), fmod(0.1, -INFINITY));
}
END_TEST

// Тесты для функции -- s21_sin(double x);
START_TEST(s21_sin_test1) {
  ck_assert_ldouble_eq_tol(s21_sin(10000), sin(10000), 0.000001);
}
END_TEST

START_TEST(s21_sin_test2) {
  ck_assert_ldouble_eq_tol(s21_sin(-87.23), sin(-87.23), 0.000001);
}
END_TEST

START_TEST(s21_sin_test3) {
  ck_assert_ldouble_eq_tol(s21_sin(0), sin(0), 0.000001);
}
END_TEST

START_TEST(s21_sin_test4) {
  ck_assert_ldouble_eq_tol(s21_sin(1), sin(1), 0.000001);
}
END_TEST

START_TEST(s21_sin_test5) {
  ck_assert_ldouble_eq_tol(s21_sin(-1.23), sin(-1.23), 0.000001);
}
END_TEST

START_TEST(s21_sin_test6) {
  ck_assert_ldouble_nan(s21_sin(INFINITY));
  ck_assert_ldouble_nan(sin(INFINITY));
}
END_TEST

START_TEST(s21_sin_test7) {
  ck_assert_ldouble_nan(s21_sin(-INFINITY));
  ck_assert_ldouble_nan(sin(-INFINITY));
}
END_TEST

START_TEST(s21_sin_test8) {
  ck_assert_ldouble_nan(s21_sin(NAN));
  ck_assert_ldouble_nan(sin(NAN));
}
END_TEST

START_TEST(s21_sin_test9) {
  ck_assert_ldouble_eq_tol(s21_sin(0.2343), sin(0.2343), 0.000001);
}
END_TEST

START_TEST(s21_sin_test10) {
  ck_assert_ldouble_eq_tol(s21_sin(-0.43), sin(-0.43), 0.000001);
}
END_TEST

// Тесты для функции -- s21_cos(double x);
START_TEST(s21_cos_test1) {
  ck_assert_ldouble_eq_tol(s21_cos(10000), cos(10000), 0.000001);
}
END_TEST

START_TEST(s21_cos_test2) {
  ck_assert_ldouble_eq_tol(s21_cos(-65.34), cos(-65.34), 0.000001);
}
END_TEST

START_TEST(s21_cos_test3) {
  ck_assert_ldouble_nan(s21_cos(INFINITY));
  ck_assert_ldouble_nan(cos(INFINITY));
}
END_TEST

START_TEST(s21_cos_test4) {
  ck_assert_ldouble_nan(s21_cos(NAN));
  ck_assert_ldouble_nan(cos(NAN));
}
END_TEST

START_TEST(s21_cos_test5) {
  ck_assert_ldouble_nan(s21_cos(-INFINITY));
  ck_assert_ldouble_nan(cos(-INFINITY));
}
END_TEST

START_TEST(s21_cos_test6) {
  ck_assert_ldouble_eq_tol(s21_cos(0), cos(0), 0.000001);
}
END_TEST

START_TEST(s21_cos_test7) {
  ck_assert_ldouble_eq_tol(s21_cos(1), cos(1), 0.000001);
}
END_TEST

START_TEST(s21_cos_test8) {
  ck_assert_ldouble_eq_tol(s21_cos(0.1234), cos(0.1234), 0.000001);
}
END_TEST

START_TEST(s21_cos_test9) {
  ck_assert_ldouble_eq_tol(s21_cos(-0.1), cos(-0.1), 0.000001);
}
END_TEST

START_TEST(s21_cos_test10) {
  ck_assert_ldouble_eq_tol(s21_cos(12435.102), cos(12435.102), 0.000001);
}
END_TEST

// Тесты для функции -- s21_tan(double x);
START_TEST(s21_tan_test1) {
  ck_assert_ldouble_eq_tol(s21_tan(6534678), tan(6534678), 0.000001);
}
END_TEST

START_TEST(s21_tan_test2) {
  ck_assert_ldouble_eq_tol(s21_tan(-45.67), tan(-45.67), 0.000001);
}
END_TEST

START_TEST(s21_tan_test3) {
  ck_assert_ldouble_eq_tol(s21_tan(0), tan(0), 0.000001);
}
END_TEST

START_TEST(s21_tan_test4) {
  ck_assert_ldouble_eq_tol(s21_tan(-1.02), tan(-1.02), 0.000001);
}
END_TEST

START_TEST(s21_tan_test5) {
  ck_assert_ldouble_eq_tol(s21_tan(0.2342), tan(0.2342), 0.000001);
}
END_TEST

START_TEST(s21_tan_test6) {
  ck_assert_ldouble_nan(s21_tan(INFINITY));
  ck_assert_ldouble_nan(tan(INFINITY));
}
END_TEST

START_TEST(s21_tan_test7) {
  ck_assert_ldouble_nan(s21_tan(-INFINITY));
  ck_assert_ldouble_nan(tan(-INFINITY));
}
END_TEST

START_TEST(s21_tan_test8) {
  ck_assert_ldouble_nan(s21_tan(NAN));
  ck_assert_ldouble_nan(tan(NAN));
}
END_TEST

START_TEST(s21_tan_test9) {
  ck_assert_ldouble_eq_tol(s21_tan(785.4), tan(785.4), 0.000001);
}
END_TEST

START_TEST(s21_tan_test10) {
  ck_assert_ldouble_eq_tol(s21_tan(-785.4), tan(-785.4), 0.000001);
}
END_TEST

// Тесты для функции -- s21_atan(double x);
START_TEST(s21_atan_test1) {
  ck_assert_ldouble_eq_tol(s21_atan(78.12), atan(78.12), 0.000001);
}
END_TEST

START_TEST(s21_atan_test2) {
  ck_assert_ldouble_eq_tol(s21_atan(-73248.1212), atan(-73248.1212), 0.000001);
}
END_TEST

START_TEST(s21_atan_test3) {
  ck_assert_ldouble_eq_tol(s21_atan(0.12345), atan(0.12345), 0.000001);
}
END_TEST

START_TEST(s21_atan_test4) {
  ck_assert_ldouble_eq_tol(s21_atan(0), atan(0), 0.000001);
}
END_TEST

START_TEST(s21_atan_test5) {
  ck_assert_ldouble_eq_tol(s21_atan(-1), atan(-1), 0.000001);
}
END_TEST

START_TEST(s21_atan_test6) {
  ck_assert_ldouble_eq_tol(s21_atan(1), atan(1), 0.000001);
}
END_TEST

START_TEST(s21_atan_test7) {
  ck_assert_ldouble_eq(s21_atan(INFINITY), atan(INFINITY));
}
END_TEST

START_TEST(s21_atan_test8) {
  ck_assert_ldouble_eq(s21_atan(-INFINITY), atan(-INFINITY));
}
END_TEST

START_TEST(s21_atan_test9) {
  ck_assert_ldouble_nan(s21_atan(NAN));
  ck_assert_ldouble_nan(atan(NAN));
}
END_TEST

START_TEST(s21_atan_test10) {
  ck_assert_ldouble_eq_tol(s21_atan(-1.01), atan(-1.01), 0.000001);
}
END_TEST

// Тесты для функции -- s21_acos(double x);
START_TEST(s21_acos_test1) {
  ck_assert_ldouble_eq_tol(s21_acos(1), acos(1), 0.000001);
}
END_TEST

START_TEST(s21_acos_test2) {
  ck_assert_ldouble_eq_tol(s21_acos(-1), acos(-1), 0.000001);
}
END_TEST

START_TEST(s21_acos_test3) {
  ck_assert_ldouble_eq_tol(s21_acos(0), acos(0), 0.000001);
}
END_TEST

START_TEST(s21_acos_test4) {
  ck_assert_ldouble_nan(s21_acos(INFINITY));
  ck_assert_ldouble_nan(acos(INFINITY));
}
END_TEST

START_TEST(s21_acos_test5) {
  ck_assert_ldouble_nan(s21_acos(-INFINITY));
  ck_assert_ldouble_nan(acos(-INFINITY));
}
END_TEST

START_TEST(s21_acos_test6) {
  ck_assert_ldouble_nan(s21_acos(NAN));
  ck_assert_ldouble_nan(acos(NAN));
}
END_TEST

START_TEST(s21_acos_test7) {
  ck_assert_ldouble_nan(s21_acos(10));
  ck_assert_ldouble_nan(acos(10));
}
END_TEST

START_TEST(s21_acos_test8) {
  ck_assert_ldouble_nan(s21_acos(-10));
  ck_assert_ldouble_nan(acos(-10));
}
END_TEST

START_TEST(s21_acos_test9) {
  ck_assert_ldouble_eq_tol(s21_acos(0.123), acos(0.123), 0.000001);
}
END_TEST

START_TEST(s21_acos_test10) {
  ck_assert_ldouble_eq_tol(s21_acos(-0.123), acos(-0.123), 0.000001);
}
END_TEST

// Тесты для функции -- s21_asin(double x);
START_TEST(s21_asin_test1) {
  ck_assert_ldouble_eq_tol(s21_asin(1), asin(1), 0.000001);
}
END_TEST

START_TEST(s21_asin_test2) {
  ck_assert_ldouble_eq_tol(s21_asin(-1), asin(-1), 0.000001);
}
END_TEST

START_TEST(s21_asin_test3) {
  ck_assert_ldouble_eq_tol(s21_asin(0), asin(0), 0.000001);
}
END_TEST

START_TEST(s21_asin_test4) {
  ck_assert_ldouble_nan(s21_asin(INFINITY));
  ck_assert_ldouble_nan(asin(INFINITY));
}
END_TEST

START_TEST(s21_asin_test5) {
  ck_assert_ldouble_nan(s21_asin(-INFINITY));
  ck_assert_ldouble_nan(asin(-INFINITY));
}
END_TEST

START_TEST(s21_asin_test6) {
  ck_assert_ldouble_nan(s21_asin(NAN));
  ck_assert_ldouble_nan(asin(NAN));
}
END_TEST

START_TEST(s21_asin_test7) {
  ck_assert_ldouble_nan(s21_asin(5));
  ck_assert_ldouble_nan(asin(5));
}
END_TEST

START_TEST(s21_asin_test8) {
  ck_assert_ldouble_nan(s21_asin(-5));
  ck_assert_ldouble_nan(asin(-5));
}
END_TEST

START_TEST(s21_asin_test9) {
  ck_assert_ldouble_eq_tol(s21_asin(0.235), asin(0.235), 0.000001);
}
END_TEST

START_TEST(s21_asin_test10) {
  ck_assert_ldouble_eq_tol(s21_asin(-0.235), asin(-0.235), 0.000001);
}
END_TEST

// Создание набора тестов для функции -- s21_abs(x)
Suite *abs_suite() {
  Suite *selection;
  TCase *test_core;
  selection = suite_create("abs(x)");
  test_core = tcase_create("core");
  tcase_add_test(test_core, s21_abs_test1);
  tcase_add_test(test_core, s21_abs_test2);
  tcase_add_test(test_core, s21_abs_test3);
  tcase_add_test(test_core, s21_abs_test4);
  tcase_add_test(test_core, s21_abs_test5);
  suite_add_tcase(selection, test_core);
  return selection;
}

// Создание набора тестов для функции -- s21_fabs(double x)
Suite *fabs_suite() {
  Suite *selection;
  TCase *test_core;
  selection = suite_create("fabs(double x)");
  test_core = tcase_create("core");
  tcase_add_test(test_core, s21_fabs_test1);
  tcase_add_test(test_core, s21_fabs_test2);
  tcase_add_test(test_core, s21_fabs_test3);
  tcase_add_test(test_core, s21_fabs_test4);
  tcase_add_test(test_core, s21_fabs_test5);
  tcase_add_test(test_core, s21_fabs_test6);
  tcase_add_test(test_core, s21_fabs_test7);
  tcase_add_test(test_core, s21_fabs_test8);
  tcase_add_test(test_core, s21_fabs_test9);
  tcase_add_test(test_core, s21_fabs_test10);
  suite_add_tcase(selection, test_core);
  return selection;
}

// Создание набора тестов для функции -- s21_exp(double x);
Suite *exp_suite() {
  Suite *selection;
  TCase *test_core;
  selection = suite_create("exp(double x)");
  test_core = tcase_create("core");
  tcase_add_test(test_core, s21_exp_test1);
  tcase_add_test(test_core, s21_exp_test2);
  tcase_add_test(test_core, s21_exp_test3);
  tcase_add_test(test_core, s21_exp_test4);
  tcase_add_test(test_core, s21_exp_test5);
  tcase_add_test(test_core, s21_exp_test6);
  tcase_add_test(test_core, s21_exp_test7);
  tcase_add_test(test_core, s21_exp_test8);
  tcase_add_test(test_core, s21_exp_test9);
  tcase_add_test(test_core, s21_exp_test10);
  suite_add_tcase(selection, test_core);
  return selection;
}

// Создание набора тестов для функции -- s21_log(double x);
Suite *log_suite() {
  Suite *selection;
  TCase *test_core;
  selection = suite_create("log(double x)");
  test_core = tcase_create("core");
  tcase_add_test(test_core, s21_log_test1);
  tcase_add_test(test_core, s21_log_test2);
  tcase_add_test(test_core, s21_log_test3);
  tcase_add_test(test_core, s21_log_test4);
  tcase_add_test(test_core, s21_log_test5);
  tcase_add_test(test_core, s21_log_test6);
  tcase_add_test(test_core, s21_log_test7);
  tcase_add_test(test_core, s21_log_test8);
  tcase_add_test(test_core, s21_log_test9);
  tcase_add_test(test_core, s21_log_test10);
  suite_add_tcase(selection, test_core);
  return selection;
}

// Создание набора тестов для функции -- s21_pow(double base, double exp);
Suite *pow_suite() {
  Suite *selection;
  TCase *test_core;
  selection = suite_create("pow(double base, double exp);");
  test_core = tcase_create("core");
  tcase_add_test(test_core, s21_pow_test1);
  tcase_add_test(test_core, s21_pow_test2);
  tcase_add_test(test_core, s21_pow_test3);
  tcase_add_test(test_core, s21_pow_test4);
  tcase_add_test(test_core, s21_pow_test5);
  tcase_add_test(test_core, s21_pow_test6);
  tcase_add_test(test_core, s21_pow_test7);
  tcase_add_test(test_core, s21_pow_test8);
  tcase_add_test(test_core, s21_pow_test9);
  tcase_add_test(test_core, s21_pow_test10);
  tcase_add_test(test_core, s21_pow_test11);
  tcase_add_test(test_core, s21_pow_test12);
  tcase_add_test(test_core, s21_pow_test13);
  tcase_add_test(test_core, s21_pow_test14);
  tcase_add_test(test_core, s21_pow_test15);
  tcase_add_test(test_core, s21_pow_test16);
  tcase_add_test(test_core, s21_pow_test17);
  tcase_add_test(test_core, s21_pow_test18);
  tcase_add_test(test_core, s21_pow_test19);
  tcase_add_test(test_core, s21_pow_test20);
  tcase_add_test(test_core, s21_pow_test21);
  tcase_add_test(test_core, s21_pow_test22);
  tcase_add_test(test_core, s21_pow_test23);
  tcase_add_test(test_core, s21_pow_test24);
  tcase_add_test(test_core, s21_pow_test25);
  tcase_add_test(test_core, s21_pow_test26);
  tcase_add_test(test_core, s21_pow_test27);
  tcase_add_test(test_core, s21_pow_test28);
  tcase_add_test(test_core, s21_pow_test29);
  tcase_add_test(test_core, s21_pow_test30);
  tcase_add_test(test_core, s21_pow_test31);
  tcase_add_test(test_core, s21_pow_test32);
  tcase_add_test(test_core, s21_pow_test33);
  tcase_add_test(test_core, s21_pow_test34);
  tcase_add_test(test_core, s21_pow_test35);
  tcase_add_test(test_core, s21_pow_test36);
  tcase_add_test(test_core, s21_pow_test37);
  tcase_add_test(test_core, s21_pow_test38);
  tcase_add_test(test_core, s21_pow_test39);
  tcase_add_test(test_core, s21_pow_test40);
  suite_add_tcase(selection, test_core);
  return selection;
}

// Создание набора тестов для функции -- s21_sqrt(double x);
Suite *sqrt_suite() {
  Suite *selection;
  TCase *test_core;
  selection = suite_create("sqrt(double x)");
  test_core = tcase_create("core");
  tcase_add_test(test_core, s21_sqrt_test1);
  tcase_add_test(test_core, s21_sqrt_test2);
  tcase_add_test(test_core, s21_sqrt_test3);
  tcase_add_test(test_core, s21_sqrt_test4);
  tcase_add_test(test_core, s21_sqrt_test5);
  tcase_add_test(test_core, s21_sqrt_test6);
  tcase_add_test(test_core, s21_sqrt_test7);
  tcase_add_test(test_core, s21_sqrt_test8);
  tcase_add_test(test_core, s21_sqrt_test9);
  tcase_add_test(test_core, s21_sqrt_test10);
  tcase_add_test(test_core, s21_sqrt_test11);
  tcase_add_test(test_core, s21_sqrt_test12);
  tcase_add_test(test_core, s21_sqrt_test13);
  tcase_add_test(test_core, s21_sqrt_test14);
  tcase_add_test(test_core, s21_sqrt_test15);
  suite_add_tcase(selection, test_core);
  return selection;
}

// Создание набора тестов для функции -- s21_ceil(double x);
Suite *ceil_suite() {
  Suite *selection;
  TCase *test_core;
  selection = suite_create("ceil(double x)");
  test_core = tcase_create("core");
  tcase_add_test(test_core, s21_ceil_test1);
  tcase_add_test(test_core, s21_ceil_test2);
  tcase_add_test(test_core, s21_ceil_test3);
  tcase_add_test(test_core, s21_ceil_test4);
  tcase_add_test(test_core, s21_ceil_test5);
  tcase_add_test(test_core, s21_ceil_test6);
  tcase_add_test(test_core, s21_ceil_test7);
  tcase_add_test(test_core, s21_ceil_test8);
  tcase_add_test(test_core, s21_ceil_test9);
  tcase_add_test(test_core, s21_ceil_test10);
  suite_add_tcase(selection, test_core);
  return selection;
}

// Создание набора тестов для функции -- s21_floor(double x);
Suite *floor_suite() {
  Suite *selection;
  TCase *test_core;
  selection = suite_create("floor(double x)");
  test_core = tcase_create("core");
  tcase_add_test(test_core, s21_floor_test1);
  tcase_add_test(test_core, s21_floor_test2);
  tcase_add_test(test_core, s21_floor_test3);
  tcase_add_test(test_core, s21_floor_test4);
  tcase_add_test(test_core, s21_floor_test5);
  tcase_add_test(test_core, s21_floor_test6);
  tcase_add_test(test_core, s21_floor_test7);
  tcase_add_test(test_core, s21_floor_test8);
  tcase_add_test(test_core, s21_floor_test9);
  tcase_add_test(test_core, s21_floor_test10);
  suite_add_tcase(selection, test_core);
  return selection;
}

// Создание набора тестов для функции -- s21_fmod(double x, double y);
Suite *fmod_suite() {
  Suite *selection;
  TCase *test_core;
  selection = suite_create("fmod(double x, double y)");
  test_core = tcase_create("core");
  tcase_add_test(test_core, s21_fmod_test1);
  tcase_add_test(test_core, s21_fmod_test2);
  tcase_add_test(test_core, s21_fmod_test3);
  tcase_add_test(test_core, s21_fmod_test4);
  tcase_add_test(test_core, s21_fmod_test5);
  tcase_add_test(test_core, s21_fmod_test6);
  tcase_add_test(test_core, s21_fmod_test7);
  tcase_add_test(test_core, s21_fmod_test8);
  tcase_add_test(test_core, s21_fmod_test9);
  tcase_add_test(test_core, s21_fmod_test10);
  tcase_add_test(test_core, s21_fmod_test11);
  tcase_add_test(test_core, s21_fmod_test12);
  tcase_add_test(test_core, s21_fmod_test13);
  tcase_add_test(test_core, s21_fmod_test14);
  tcase_add_test(test_core, s21_fmod_test15);
  tcase_add_test(test_core, s21_fmod_test16);
  tcase_add_test(test_core, s21_fmod_test17);
  tcase_add_test(test_core, s21_fmod_test18);
  tcase_add_test(test_core, s21_fmod_test19);
  tcase_add_test(test_core, s21_fmod_test20);
  tcase_add_test(test_core, s21_fmod_test21);
  tcase_add_test(test_core, s21_fmod_test22);
  tcase_add_test(test_core, s21_fmod_test23);
  tcase_add_test(test_core, s21_fmod_test24);
  tcase_add_test(test_core, s21_fmod_test25);
  suite_add_tcase(selection, test_core);
  return selection;
}

// Создание набора тестов для функции -- s21_sin(double x);
Suite *sin_suite() {
  Suite *selection;
  TCase *test_core;
  selection = suite_create("sin(double x)");
  test_core = tcase_create("core");
  tcase_add_test(test_core, s21_sin_test1);
  tcase_add_test(test_core, s21_sin_test2);
  tcase_add_test(test_core, s21_sin_test3);
  tcase_add_test(test_core, s21_sin_test4);
  tcase_add_test(test_core, s21_sin_test5);
  tcase_add_test(test_core, s21_sin_test6);
  tcase_add_test(test_core, s21_sin_test7);
  tcase_add_test(test_core, s21_sin_test8);
  tcase_add_test(test_core, s21_sin_test9);
  tcase_add_test(test_core, s21_sin_test10);
  suite_add_tcase(selection, test_core);
  return selection;
}

// Создание набора тестов для функции -- s21_cos(double x);
Suite *cos_suite() {
  Suite *selection;
  TCase *test_core;
  selection = suite_create("cos(double x)");
  test_core = tcase_create("core");
  tcase_add_test(test_core, s21_cos_test1);
  tcase_add_test(test_core, s21_cos_test2);
  tcase_add_test(test_core, s21_cos_test3);
  tcase_add_test(test_core, s21_cos_test4);
  tcase_add_test(test_core, s21_cos_test5);
  tcase_add_test(test_core, s21_cos_test6);
  tcase_add_test(test_core, s21_cos_test7);
  tcase_add_test(test_core, s21_cos_test8);
  tcase_add_test(test_core, s21_cos_test9);
  tcase_add_test(test_core, s21_cos_test10);
  suite_add_tcase(selection, test_core);
  return selection;
}

// Создание набора тестов для функции -- s21_tan(double x);
Suite *tan_suite() {
  Suite *selection;
  TCase *test_core;
  selection = suite_create("tan(double x)");
  test_core = tcase_create("core");
  tcase_add_test(test_core, s21_tan_test1);
  tcase_add_test(test_core, s21_tan_test2);
  tcase_add_test(test_core, s21_tan_test3);
  tcase_add_test(test_core, s21_tan_test4);
  tcase_add_test(test_core, s21_tan_test5);
  tcase_add_test(test_core, s21_tan_test6);
  tcase_add_test(test_core, s21_tan_test7);
  tcase_add_test(test_core, s21_tan_test8);
  tcase_add_test(test_core, s21_tan_test9);
  tcase_add_test(test_core, s21_tan_test10);
  suite_add_tcase(selection, test_core);
  return selection;
}

// Создание набора тестов для функции -- s21_atan(double x);
Suite *atan_suite() {
  Suite *selection;
  TCase *test_core;
  selection = suite_create("atan(double x)");
  test_core = tcase_create("core");
  tcase_add_test(test_core, s21_atan_test1);
  tcase_add_test(test_core, s21_atan_test2);
  tcase_add_test(test_core, s21_atan_test3);
  tcase_add_test(test_core, s21_atan_test4);
  tcase_add_test(test_core, s21_atan_test5);
  tcase_add_test(test_core, s21_atan_test6);
  tcase_add_test(test_core, s21_atan_test7);
  tcase_add_test(test_core, s21_atan_test8);
  tcase_add_test(test_core, s21_atan_test9);
  tcase_add_test(test_core, s21_atan_test10);
  suite_add_tcase(selection, test_core);
  return selection;
}

// Создание набора тестов для функции -- s21_acos(double x);
Suite *acos_suite() {
  Suite *selection;
  TCase *test_core;
  selection = suite_create("acos(double x)");
  test_core = tcase_create("core");
  tcase_add_test(test_core, s21_acos_test1);
  tcase_add_test(test_core, s21_acos_test2);
  tcase_add_test(test_core, s21_acos_test3);
  tcase_add_test(test_core, s21_acos_test4);
  tcase_add_test(test_core, s21_acos_test5);
  tcase_add_test(test_core, s21_acos_test6);
  tcase_add_test(test_core, s21_acos_test7);
  tcase_add_test(test_core, s21_acos_test8);
  tcase_add_test(test_core, s21_acos_test9);
  tcase_add_test(test_core, s21_acos_test10);
  suite_add_tcase(selection, test_core);
  return selection;
}

// Создание набора тестов для функции -- s21_asin(double x);
Suite *asin_suite() {
  Suite *selection;
  TCase *test_core;
  selection = suite_create("asin(double x)");
  test_core = tcase_create("core");
  tcase_add_test(test_core, s21_asin_test1);
  tcase_add_test(test_core, s21_asin_test2);
  tcase_add_test(test_core, s21_asin_test3);
  tcase_add_test(test_core, s21_asin_test4);
  tcase_add_test(test_core, s21_asin_test5);
  tcase_add_test(test_core, s21_asin_test6);
  tcase_add_test(test_core, s21_asin_test7);
  tcase_add_test(test_core, s21_asin_test8);
  tcase_add_test(test_core, s21_asin_test9);
  tcase_add_test(test_core, s21_asin_test10);
  suite_add_tcase(selection, test_core);
  return selection;
}

// Запуск тестов и подсчет ошибок
void case_test(Suite *selection, int *fail) {
  SRunner *runner = srunner_create(selection);
  srunner_run_all(runner, CK_NORMAL);
  *fail = srunner_ntests_failed(runner);
  srunner_free(runner);
}

int main() {
  int fail = 0;
  case_test(abs_suite(), &fail);
  case_test(fabs_suite(), &fail);
  case_test(exp_suite(), &fail);
  case_test(log_suite(), &fail);
  case_test(pow_suite(), &fail);
  case_test(sqrt_suite(), &fail);
  case_test(ceil_suite(), &fail);
  case_test(floor_suite(), &fail);
  case_test(fmod_suite(), &fail);
  case_test(sin_suite(), &fail);
  case_test(cos_suite(), &fail);
  case_test(tan_suite(), &fail);
  case_test(atan_suite(), &fail);
  case_test(acos_suite(), &fail);
  case_test(asin_suite(), &fail);
  return fail;
}