/**
 * Author: Gezo
 * Problem: E Area of a Circle
 * Source: Assiut University Training - Sheet #1
 * Link: https://codeforces.com/group/MWSDmqGsZm/contest/219158/problem/E
 */

#include <iomanip>
#include <iostream>
using namespace std;

int main() {
  double r;

  cin >> r;

  cout << fixed << setprecision(9) << 3.141592653 * r * r;

  return 0;
}