/**
 * Author: Hossam (HossamGezo)
 * Problem: G Even Hate Odd
 * Source: Assiut University Training - Contest #3.1
 * Link: https://codeforces.com/group/MWSDmqGsZm/contest/329103/problem/G
 */

#include <algorithm>
#include <iostream>
using namespace std;

int main() {
  int t, n;

  cin >> t;

  while (t--) {
    cin >> n;

    int arr[n], ce = 0, co = 0;

    for (int i = 0; i < n; ++i) {
      cin >> arr[i];

      if (arr[i] % 2 == 0)
        ++ce;
      else
        ++co;
    }

    if (n % 2 != 0)
      cout << -1;
    else if (ce == co)
      cout << 0;
    else
      cout << max(ce, co) - (n / 2);

    cout << endl;
  }

  return 0;
}