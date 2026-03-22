/**
 * Author: Hossam (HossamGezo)
 * Problem: Z_Hard_Compare
 * Source: Assiut University Training - Sheet #1
 * Link: https://codeforces.com/group/MWSDmqGsZm/contest/219158
 */

#include <iostream>
#include <math.h>
using namespace std;

int main() {
  long long a, b, c, d;

  cin >> a >> b >> c >> d;

  if (log10(a) * b > log10(c) * d)
    cout << "YES";
  else
    cout << "NO";

  return 0;
}