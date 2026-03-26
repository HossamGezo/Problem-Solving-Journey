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
  long long k, s, mn, sum = 0;

  cin >> k >> s;
  mn = min(k, s);

  // Note: This solution will give you a "Time Limit Exceeded" error
  for (int i = 0; i <= mn; ++i) {
    for (int j = 0; j <= mn; ++j) {
      if (i + j > s) break;
      for (int k = 0; k <= mn; ++k) {
        if (i + j + k == s) {
          ++sum;
          break;
        }
      }
    }
  }

  cout << sum << endl;

  // sum = 0;

  // if (mn == 0) {
  //   cout << 0;
  // } else {
  //   for (int i = 1; i <= mn + 1; ++i) {
  //     sum += i;
  //   }

  //   cout << sum;
  // }

  return 0;
}