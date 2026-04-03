/**
 * Author: Hossam (HossamGezo)
 * Problem: C Compare
 * Source: Assiut University Training - Sheet #4
 * Link: https://codeforces.com/group/MWSDmqGsZm/contest/219856/problem/C
 */

#include <algorithm>
#include <iostream>
#include <string>
using namespace std;

int main() {
  string x, y;

  cin >> x >> y;

  // int mn = min(x.length(), y.length());

  // for (int i = 0; i < mn; ++i) {
  //   if (x[i] < y[i])
  //     return cout << x, 0;
  //   else if (x[i] > y[i])
  //     return cout << y, 0;
  // }

  // if (x.length() < y.length())
  //   cout << x;
  // else
  //   cout << y;

  // NOTE --- Another Solution Using ' #include <algorithm> ' library "Simpler solution"

  cout << min(x, y);

  return 0;
}