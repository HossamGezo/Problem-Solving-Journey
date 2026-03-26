/**
 * Author: Hossam (HossamGezo)
 * Problem: Z Three Numbers
 * Source: Assiut University Training - Sheet #2
 * Link: https://codeforces.com/group/MWSDmqGsZm/contest/219432/problem/Z
 */

#include <cmath>
#include <iostream>
using namespace std;

int main() {
  int k, s, mn, z, sum = 0;

  cin >> k >> s;
  mn = min(k, s);

  // Note: This solution will give you a "Time Limit Exceeded" error
  // for (int i = 0; i <= mn; ++i) {
  //   for (int j = 0; j <= mn; ++j) {
  //     if (i + j > s) break;
  //     for (int k = 0; k <= mn; ++k) {
  //       if (i + j + k == s) {
  //         ++sum;
  //         break;
  //       }
  //     }
  //   }
  // }

  // cout << sum;

  for (int x = 0; x <= mn; ++x) {
    for (int y = 0; y <= mn; ++y) {
      z = s - x - y;
      if (z >= 0 && z <= mn) ++sum;
    }
  }

  cout << sum;

  return 0;
}