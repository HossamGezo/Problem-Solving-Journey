/**
 * Author: Gezo
 * Problem: Y Min Cost String
 * Source: Assiut University Training - Sheet #4
 * Link: https://codeforces.com/group/MWSDmqGsZm/contest/219856/problem/Y
 */

#include <cmath>
#include <iostream>
#include <limits>
#include <string>
using namespace std;

int main() {
  string s;
  int arr[26];
  bool f = true;

  cin >> s;

  for (int i = 0; i < 26; ++i) cin >> arr[i];

  // --- Step_00 ' Case : ??????? '

  for (int i = 0; i < s.length(); ++i)
    if (s[i] != '?') f = false;

  if (f) {
    for (int i = 0; i < s.length(); ++i) s[i] = 'a';
    cout << 0 << endl << s;
    return 0;
  }

  // --- Step_01 ' Case : ??????z '

  if (s[0] == '?') {
    int r = 0;

    for (int i = 1; i < s.length(); ++i) {
      if (s[i] != '?') {
        r = i;
        break;
      }
    }

    int c = 0, mn = INT_MAX;
    char q;
    for (int i = 'a'; i <= 'z'; ++i) {
      c = abs(arr[i - 'a'] - arr[s[r] - 'a']);

      if (mn > c) {
        mn = c;
        q = i;
      }
    }

    for (int i = 0; i < r; ++i) s[i] = q;
  }

  // --- Step_02 ' Case : z?????? '

  if (s[s.length() - 1] == '?') {
    int l = 0;

    for (int i = s.length() - 1; i >= 0; --i) {
      if (s[i] != '?') {
        l = i;
        break;
      }
    }

    int c = 0, mn = INT_MAX;
    char q;
    for (int i = 'a'; i <= 'z'; ++i) {
      c = abs(arr[i - 'a'] - arr[s[l] - 'a']);

      if (mn > c) {
        mn = c;
        q = i;
      }
    }

    for (int i = l + 1; i < s.length(); ++i) s[i] = q;
  }

  // --- Step_03 ' Case : z?????z '

  for (int i = 1; i < s.length() - 1; ++i) {
    if (s[i] == '?') {
      int r = 0, c = 0, mn = INT_MAX;
      char q;

      for (int k = i + 1; k < s.length(); ++k) {
        if (s[k] != '?') {
          r = k;
          break;
        }
      }

      for (int j = 'a'; j <= 'z'; ++j) {
        c = abs(arr[s[i - 1] - 'a'] - arr[j - 'a']) + abs(arr[j - 'a'] - arr[s[r] - 'a']);

        if (mn > c) {
          mn = c;
          q = j;
        }
      }

      for (int z = i; z < r; ++z) s[z] = q;
    }
  }

  long long c = 0;
  for (int i = 0; i < s.length() - 1; ++i) {
    c += abs(arr[s[i] - 'a'] - arr[s[i + 1] - 'a']);
  }

  cout << c << endl << s;

  return 0;
}
