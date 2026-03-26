/**
 * Author: Hossam (HossamGezo)
 * Problem: Z Hard Compare
 * Source: Assiut University Training - Sheet #1
 * Link: https://codeforces.com/group/MWSDmqGsZm/contest/219158/problem/Z
 */

#include <cmath>
#include <iostream>
using namespace std;

int main() {
  long long a, b, c, d;

  cin >> a >> b >> c >> d;

  if (b * log(a) > d * log(c))
    cout << "YES";
  else
    cout << "NO";

  return 0;
}