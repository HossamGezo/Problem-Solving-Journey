/**
 * Author: Hossam (HossamGezo)
 * Problem: C_Simple_Calculator
 * Source: Assiut University Training - Sheet #1
 * Link: https://codeforces.com/group/MWSDmqGsZm/contest/219158/problem/C
 */

#include <iostream>
using namespace std;

int main() {
  long long x, y;

  cin >> x >> y;

  cout << x << " + " << y << " = " << x + y << endl;
  cout << x << " * " << y << " = " << x * y << endl;
  cout << x << " - " << y << " = " << x - y << endl;

  return 0;
}