/**
 * Author: Hossam (HossamGezo)
 * Problem: F_Digits_Summation
 * Source: Assiut University Training - Sheet #1
 * Link: https://codeforces.com/group/MWSDmqGsZm/contest/219158
 */

#include <iostream>
using namespace std;

int main() {
  long long x, y;

  cin >> x >> y;

  cout << x % 10 + y % 10;

  return 0;
}