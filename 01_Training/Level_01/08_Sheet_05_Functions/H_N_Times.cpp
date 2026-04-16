/**
 * Author: Gezo
 * Problem: H N Times
 * Source: Assiut University Training - Sheet #5
 * Link: https://codeforces.com/group/MWSDmqGsZm/contest/223205/problem/H
 */

#include <iostream>
using namespace std;

void solve(int n, char c) {
  for (int i = 0; i < n; ++i) cout << c << " ";

  cout << endl;
}

int main() {
  int t, n;
  char c;

  cin >> t;

  while (t--) {
    cin >> n >> c;

    solve(n, c);
  }

  return 0;
}