/**
 * Author: Hossam (HossamGezo)
 * Problem: A Winter Sale
 * Source: Assiut University Training - Contest #1
 * Link: https://codeforces.com/group/MWSDmqGsZm/contest/326175/problem/A
 */

#include <iomanip>
#include <iostream>
using namespace std;

int main() {
  double x, p;

  cin >> x >> p;

  /**
   *  p ---- > (100 - x)%
   *  d ---- > x%
   *  -------------------
   *  d = (x * p) / (100 - x) // Value of discount
   *  p + d                   // Value before discount
   */
  cout << fixed << setprecision(2);
  cout << p + (x * p) / (100 - x);

  // --- Another Solution Note: This is a different equation

  /**
   *  p ---- > (100 - x)%
   *  d ---- > 100% (Note: That's equal '1')
   *  -------------------
   *  d = p / ((100 - x) / 100) // Value of discount
   */
  // cout << fixed << setprecision(2);
  // cout << p / ((100 - x) / 100);

  return 0;
}