/**
 * Author: Hossam (HossamGezo)
 * Problem: T_Sort_Numbers
 * Source: Assiut University Training - Sheet #1
 * Link: https://codeforces.com/group/MWSDmqGsZm/contest/219158/problem/T
 */

#include <iostream>
#include <algorithm>
using namespace std;

int main() {
  long long a, b, c, mx, mn;

  cin >> a >> b >> c;

  mn = min({a, b, c});
  mx = max({a, b, c});

  cout << mn << endl
    << (a + b + c) - (mn + mx) << endl
    << mx << endl << endl;

  cout << a << endl
    << b << endl
    << c;

  return 0;
}