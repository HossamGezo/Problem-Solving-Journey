/**
 * Author: Hossam (HossamGezo)
 * Problem: D_Difference
 * Source: Assiut University Training - Sheet #1
 * Link: https://codeforces.com/group/MWSDmqGsZm/contest/219158/problem/D
 */

#include <iostream>
using namespace std;

int main() {
  long long a, b, c, d;

  cin >> a >> b >> c >> d;

  cout << "Difference = " << (a * b) - ( c * d);

  return 0;
}