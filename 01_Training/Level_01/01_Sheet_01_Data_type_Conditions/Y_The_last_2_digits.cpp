/**
 * Author: Hossam (HossamGezo)
 * Problem: Y The last 2 digits
 * Source: Assiut University Training - Sheet #1
 * Link: https://codeforces.com/group/MWSDmqGsZm/contest/219158/problem/Y
 */

#include <iostream>
using namespace std;

int main() {
  long long a, b, c, d, m;

  cin >> a >> b >> c >> d;

  m = ((a % 100) * (b % 100) * (c % 100) * (d % 100)) % 100;

  if (m > 10)
    cout << m;
  else
    cout << "0" << m;

  return 0;
}