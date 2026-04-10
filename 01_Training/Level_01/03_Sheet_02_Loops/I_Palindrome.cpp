/**
 * Author: Gezo
 * Problem: I Palindrome
 * Source: Assiut University Training - Sheet #2
 * Link: https://codeforces.com/group/MWSDmqGsZm/contest/219432/problem/I
 */

#include <iostream>
using namespace std;

int main() {
  int n, m, r, w = 0;

  cin >> n;
  m = n;

  while (n) {
    r = n % 10;

    w = w * 10 + r;

    n /= 10;
  }

  cout << w << endl;

  if (w == m)
    cout << "YES";
  else
    cout << "NO";

  return 0;
}