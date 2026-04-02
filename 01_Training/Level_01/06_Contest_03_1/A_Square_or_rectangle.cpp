/**
 * Author: Hossam (HossamGezo)
 * Problem: A Square or rectangle
 * Source: Assiut University Training - Contest #3.1
 * Link: https://codeforces.com/group/MWSDmqGsZm/contest/329103/problem/A
 */

#include <iostream>
using namespace std;

int main() {
  int t, x, y;

  cin >> t;

  while (t--) {
    cin >> x >> y;

    if (x == y)
      cout << "Square\n";
    else
      cout << "Rectangle\n";
  }

  return 0;
}