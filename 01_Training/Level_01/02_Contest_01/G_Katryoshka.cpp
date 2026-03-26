/**
 * Author: Hossam (HossamGezo)
 * Problem: G Katryoshka
 * Source: Assiut University Training - Contest #1
 * Link: https://codeforces.com/group/MWSDmqGsZm/contest/326175/problem/G
 */

#include <algorithm>
#include <iostream>
using namespace std;

int main() {
  long long n, m, k, mn;

  cin >> n >> m >> k;

  if (n == 0 || k == 0 || (m == 0 && n == 1))
    cout << 0;
  else if (m == 0)
    cout << min((n / 2), k);
  else {
    mn = min({n, m, k});
    n -= mn;
    m -= mn;
    k -= mn;
    if (m == 0)
      cout << mn + min((n / 2), k);
    else
      cout << mn;
  }

  return 0;
}