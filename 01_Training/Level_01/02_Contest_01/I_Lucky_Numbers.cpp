/**
 * Author: Hossam (HossamGezo)
 * Problem: I Lucky Numbers
 * Source: Assiut University Training - Contest #1
 * Link: https://codeforces.com/group/MWSDmqGsZm/contest/326175/problem/I
 */

#include <algorithm>
#include <iostream>
using namespace std;

int main() {
  int n, x, y;

  cin >> n;

  x = n / 10;
  y = n % 10;

  // if ((n % 10 == 0) || (x >= y && x % y == 0) || (y >= x && y % x == 0))
  //   cout << "YES";
  // else
  //   cout << "NO";

  // NOTE --- Another Solution Note: Using ' #include <algorithm> ' library

  // if (n % 10 == 0 || max(x, y) % min(x, y) == 0)
  //   cout << "YES";
  // else
  //   cout << "NO";

  // NOTE --- Another Solution Note: Without using ' #include <algorithm> ' library

  // if (n % 10 == 0 || x % y == 0 || y % x == 0)
  //   cout << "YES";
  // else
  //   cout << "NO";

  // NOTE --- Another Solution Note: Without using ' #include <algorithm> ' library "Simpler
  // solution"

  if (y == 0 || x % y == 0 || y % x == 0)
    cout << "YES";
  else
    cout << "NO";

  return 0;
}