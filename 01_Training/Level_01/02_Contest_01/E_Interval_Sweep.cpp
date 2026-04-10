/**
 * Author: Gezo
 * Problem: E Interval Sweep
 * Source: Assiut University Training - Contest #1
 * Link: https://codeforces.com/group/MWSDmqGsZm/contest/326175/problem/E
 */

#include <iostream>
using namespace std;

int main() {
  int a, b;

  cin >> a >> b;

  if (a + b == 0 || a - b >= 2 || b - a >= 2)
    cout << "NO";
  else
    cout << "YES";

  return 0;
}