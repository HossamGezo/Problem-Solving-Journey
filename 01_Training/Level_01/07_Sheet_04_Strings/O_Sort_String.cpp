/**
 * Author: Gezo
 * Problem: O Sort String
 * Source: Assiut University Training - Sheet #4
 * Link: https://codeforces.com/group/MWSDmqGsZm/contest/219856/problem/O
 */

#include <iostream>
#include <string>
using namespace std;

int main() {
  // NOTE --- This solution causes 'Memory Limit Exceeded' on Test 3

  // int n;
  // string s;

  // cin >> n >> s;

  // for (int i = 0; i < n; ++i)
  //   for (int j = i + 1; j < n; ++j)
  //     if (s[i] > s[j]) swap(s[i], s[j]);

  // cout << s;

  // NOTE --- Another optimized solution

  int n, arr[26] = {};
  char x;

  cin >> n;

  for (int i = 0; i < n; ++i) {
    cin >> x;

    ++arr[x - 'a'];
  }

  for (int i = 0; i < 26; ++i)
    while (arr[i]--) cout << char(i + 'a');

  return 0;
}