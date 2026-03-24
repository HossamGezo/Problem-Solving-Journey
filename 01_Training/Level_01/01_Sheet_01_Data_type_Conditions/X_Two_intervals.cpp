/**
 * Author: Hossam (HossamGezo)
 * Problem: X Two intervals
 * Source: Assiut University Training - Sheet #1
 * Link: https://codeforces.com/group/MWSDmqGsZm/contest/219158/problem/X
 */

#include <algorithm>
#include <iostream>
using namespace std;

int main() {
  long long l1, r1, l2, r2;

  cin >> l1 >> r1 >> l2 >> r2;

  // if (r1 < l2 || r2 < l1)
  //   cout << "-1";
  // else {
  //   if (l2 >= l1 && r2 <= r1)
  //     cout << l2 << " " << r2;
  //   else if (l1 >= l2 && r1 <= r2)
  //     cout << l1 << " " << r1;
  //   else if (l2 < l1 && r2 < r1)
  //     cout << l1 << " " << r2;
  //   else if (l1 < l2 && r1 < r2)
  //     cout << l2 << " " << r1;
  // }

  // --- Another Solution Note: Using ' #include <algorithm> ' library "Simpler solution"
  long long l, r;

  if (r1 < l2 || r2 < l1)
    cout << "-1";
  else {
    l = max(l1, l2);
    r = min(r1, r2);
    cout << l << " " << r;
  }

  return 0;
}