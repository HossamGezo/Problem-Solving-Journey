/**
 * Author: Gezo
 * Problem: D Prime Function
 * Source: Assiut University Training - Sheet #5
 * Link: https://codeforces.com/group/MWSDmqGsZm/contest/223205/problem/D
 */

#include <iostream>
using namespace std;

void solve(int n) {
  if (n < 2) {
    cout << "NO\n";
    return;
  }

  if (n == 2 || n == 3) {
    cout << "YES\n";
    return;
  }

  if (n % 2 == 0 || n % 3 == 0) {
    cout << "NO\n";
    return;
  }

  bool f = false;
  for (int i = 5; i * i <= n; i += 6) {
    if (n % i == 0 || n % (i + 2) == 0) {
      f = true;
      break;
    }
  }

  if (f)
    cout << "NO\n";
  else
    cout << "YES\n";
}

int main() {
  int t, n;

  cin >> t;

  while (t--) {
    cin >> n;
    solve(n);
  }

  return 0;
}