/**
 * Author: Hossam (HossamGezo)
 * Problem: L String Functions
 * Source: Assiut University Training - Sheet #4
 * Link: https://codeforces.com/group/MWSDmqGsZm/contest/219856/problem/L
 */

#include <algorithm>
#include <iostream>
#include <string>
using namespace std;

int main() {
  int n, t, l, r;
  string s, q;
  char x;

  cin >> n >> t >> s;

  while (t--) {
    cin >> q;

    if (q == "pop_back")
      s.pop_back();

    else if (q == "front")
      cout << s.front() << endl;

    else if (q == "back")
      cout << s.back() << endl;

    else if (q == "sort") {
      cin >> l >> r;

      --l;
      --r;

      if (l > r) swap(l, r);

      sort(s.begin() + l, s.begin() + r + 1);
    }

    else if (q == "reverse") {
      cin >> l >> r;

      --l;
      --r;

      if (l > r) swap(l, r);

      reverse(s.begin() + l, s.begin() + r + 1);
    }

    else if (q == "print") {
      cin >> l;

      --l;

      cout << s[l] << endl;
    }

    else if (q == "substr") {
      cin >> l >> r;

      --l;
      --r;

      if (l > r) swap(l, r);

      cout << s.substr(l, r - l + 1) << endl;
    }

    else if (q == "push_back") {
      cin >> x;

      s.push_back(x);
    }
  }

  return 0;
}