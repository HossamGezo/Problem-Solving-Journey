/**
 * Author: Hossam (HossamGezo)
 * Problem: K_Max_and_Min
 * Source: Assiut University Training - Sheet #1
 * Link: https://codeforces.com/group/MWSDmqGsZm/contest/219158/problem/K
 */

#include <iostream>
#include <algorithm>
using namespace std;

int main() {
  int a, b, c, x;

  cin >> a >> b >> c;

  // if (a > b) {
  //   x = a;
  //   a = b;
  //   b = x;
  // }
  // if (b > c) {
  //   x = c;
  //   c = b;
  //   b = x;
  // }
  // if (a > b) {
  //   x = a;
  //   a = b;
  //   b = x;
  // }

  // cout << a << " " << c;

  // --- Another Solution Note: Using ' #include <algorithm> ' library "Simpler solution"

  cout << min({a, b, c}) << " " << max({a, b, c});

  return 0;
}