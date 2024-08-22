#include "s21_math.h"

long double factorial(int x) {
  long double res = 1;
  if (x != 0)
    for (int i = 1; i < x + 1; i++) res *= i;
  return res;
}

long double pow_int(double base, int exp) {
  long double res = 1;
  if (exp > 0) {
    for (int i = 0; i < exp; i++) res *= base;
  } else if (exp < 0) {
    for (int i = 0; i > exp; i--) res /= base;
  }
  return res;
}

long double s21_fabs(double x) {
  long double res = x;
  if (x < 0) res = -x;
  return res;
}

long double s21_exp(double x) {
  long double res = 1;
  if (x == INF_POS)
    res = INF_POS;
  else if (x == INF_NEG || x <= -15)
    res = 0;
  else if (IS_NaN(x))
    res = NaN;
  else {
    long double add = 1;
    int n = 1;
    while (s21_fabs(add) > EPSILON) {
      add = pow_int(x, n) / factorial(n);
      res += add;
      n++;
      if (res > S21_DBL_MAX) {
        res = INF_POS;
        break;
      }
    }
  }
  return res;
}

long double s21_log(double x) {
  long double res = 0;
  if (x < 0 || IS_NaN(x) || x == INF_NEG)
    res = NaN;
  else if (x == INF_POS)
    res = INF_POS;
  else if (x == 0)
    res = INF_NEG;
  else if (x == 1)
    res = 0;
  else {
    int count = 0;
    for (; x > E; count++) x /= E;
    for (int n = 0; n < 100; n++)
      res += 2 * (x - s21_exp(res)) / (x + s21_exp(res));
    res += count;
  }
  return res;
}

long double sub_pow(double base, double exp) {
  long double res = 1;
  if (base < 0 && exp != (long long int)exp)
    res = NaN;
  else if (base < 0)
    res = pow_int(base, exp);
  else {
    res = s21_exp(exp * s21_log(base));
    if (res > S21_DBL_MAX) res = INF_POS;
  }
  return res;
}

long double s21_pow(double base, double exp) {
  long double res = 1;
  if (IS_NaN(exp))
    res = NaN;
  else if (exp == INF_POS) {
    if (s21_fabs(base) < 1)
      res = 0;
    else if (base == 1 || base == -1)
      res = 1;
    else if (IS_NaN(base))
      res = NaN;
    else
      res = INF_POS;
  } else if (exp == INF_NEG) {
    if (s21_fabs(base) < 1)
      res = INF_POS;
    else if (base == 1 || base == -1)
      res = 1;
    else if (IS_NaN(base))
      res = NaN;
    else
      res = 0;
  } else if (exp == 0)
    res = 1;
  else if (exp < 0) {
    if (IS_NaN(base))
      res = NaN;
    else if (base == INF_NEG || base == INF_POS)
      res = 0;
    else if (base == 0)
      res = INF_POS;
    else
      res = sub_pow(base, exp);
  } else if (exp > 0) {
    if (IS_NaN(base))
      res = NaN;
    else if (base == INF_POS)
      res = INF_POS;
    else if (base == INF_NEG && exp == (long long int)exp &&
             (long long int)exp % 2 != 0)
      res = INF_NEG;
    else if (base == INF_NEG)
      res = INF_POS;
    else if (base == 0)
      res = 0;
    else
      res = sub_pow(base, exp);
  }
  return res;
}

long double s21_sqrt(double x) {
  long double res = 1;
  if (x < 0 || x == INF_NEG || IS_NaN(x))
    res = NaN;
  else if (x == INF_POS || x == 0)
    res = x;
  else
    res = s21_pow(x, 0.5);
  return res;
}

int s21_abs(int x) {
  int res = x;
  if (x < 0) res = -x;
  return res;
}

long double s21_ceil(double x) {
  long double res = 0;
  if (x == INF_NEG || x == INF_POS || IS_NaN(x) || x == (long long int)x)
    res = x;
  else {
    long double z = (long long int)x;
    if (x > 0)
      res = z + 1;
    else if (x < 0)
      res = z;
  }
  return res;
}

long double s21_floor(double x) {
  long double res = 0;
  if (x == INF_NEG || x == INF_POS || IS_NaN(x) || x == (long long int)x)
    res = x;
  else {
    long double z = (long long int)x;
    if (x > 0)
      res = z;
    else if (x < 0)
      res = z - 1;
  }
  return res;
}

long double s21_fmod(double x, double y) {
  long double res = 1;
  if (y == 0 || IS_NaN(x) || IS_NaN(y) || x == INF_POS || x == INF_NEG)
    res = NaN;
  else if (y == INF_POS || y == INF_NEG)
    res = x;
  else
    res = x - (long long int)(x / y) * y;
  return res;
}

long double s21_sin(double x) {
  long double res = 0;
  if (x == INF_POS || x == INF_NEG || IS_NaN(x))
    res = NaN;
  else {
    x = s21_fmod(x, 2 * PI);
    long double add = 1;
    int n = 1;
    while (s21_fabs(add) > EPSILON) {
      add = pow_int(-1, n + 1) * pow_int(x, 2 * n - 1) / factorial(2 * n - 1);
      res += add;
      n++;
    }
  }
  return res;
}

long double s21_cos(double x) {
  long double res = 0;
  if (x == INF_POS || x == INF_NEG || IS_NaN(x))
    res = NaN;
  else
    res = s21_sin(PI / 2 + x);
  return res;
}

long double s21_tan(double x) {
  long double res = 0;
  if (x == INF_POS || x == INF_NEG || IS_NaN(x))
    res = NaN;
  else
    res = s21_sin(x) / s21_cos(x);
  return res;
}

long double s21_atan(double x) {
  long double res = 0;
  if (IS_NaN(x))
    res = NaN;
  else if (x == 1)
    res = 0.785398;
  else if (x == -1)
    res = -0.785398;
  else if (x == INF_POS)
    res = PI / 2;
  else if (x == INF_NEG)
    res = -PI / 2;
  else {
    if (s21_fabs(x) <= 1) {
      for (int n = 0; n < 7000; n++)
        res += pow_int(-1, n) * pow_int(x, 1 + (2 * n)) / (2 * n + 1);
    } else {
      for (int n = 0; n < 7000; n++)
        res += pow_int(-1, n) * pow_int(x, -1 - (2 * n)) / (2 * n + 1);
      res = PI * s21_fabs(x) / (2 * x) - res;
    }
  }
  return res;
}

long double s21_acos(double x) {
  long double res = 0;
  if (x == INF_POS || x < -1 || x > 1 || IS_NaN(x))
    res = NaN;
  else if (x == -1)
    res = 3.141592;
  else if (x >= 0 && x < 1)
    res = s21_atan(s21_sqrt(1 - x * x) / x);
  else if (x < 0 && x > -1)
    res = PI + s21_atan(s21_sqrt(1 - x * x) / x);
  return res;
}

long double s21_asin(double x) {
  long double res = 0;
  if (x == INF_POS || x < -1 || x > 1 || IS_NaN(x))
    res = NaN;
  else
    res = (PI / 2) - s21_acos(x);
  return res;
}