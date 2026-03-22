/**
 * Author: Hossam (HossamGezo)
 * Problem: E_Area_of_a_Circle
 * Source: Assiut University Training - Sheet #1
 * Link: https://codeforces.com/group/MWSDmqGsZm/contest/219158/problem/E
 */

#include <iostream>
#include <iomanip>
using namespace std;

int main() {
  double r;

  cin >> r;

  cout << fixed << setprecision(9) << 3.141592653 * r * r;

  return 0;
}