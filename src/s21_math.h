#ifndef S21_MATH_H_
#define S21_MATH_H_

#define PI 3.14159265358979323846264338327950288
#define E 2.71828182845904523536028747135266250
#define INF_POS 1.0 / 0.0
#define INF_NEG -1.0 / 0.0
#define NaN 0.0 / 0.0
#define EPSILON 1e-100
#define S21_DBL_MAX 1.7976931348623157e308L
#define IS_NaN(x) (x != x)

int s21_abs(int x);
long double s21_fabs(double x);
long double s21_exp(double x);
long double s21_log(double x);
long double s21_pow(double base, double exp);
long double s21_sqrt(double x);
long double s21_ceil(double x);
long double s21_floor(double x);
long double s21_fmod(double x, double y);
long double s21_sin(double x);
long double s21_cos(double x);
long double s21_tan(double x);
long double s21_atan(double x);
long double s21_acos(double x);
long double s21_asin(double x);

#endif