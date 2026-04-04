/**
 * Author: Hossam (HossamGezo)
 * Problem: J Count Letters
 * Source: Assiut University Training - Sheet #4
 * Link: https://codeforces.com/group/MWSDmqGsZm/contest/219856/problem/J
 */

#include <algorithm>
#include <iostream>
#include <string>
using namespace std;

int main() {
  string s;

  cin >> s;

  // int arr[150] = {};

  // for (int i = 0; i < s.length(); ++i) ++arr[s[i]];

  // for (char i = 'a'; i <= 'z'; ++i) {
  //   if (arr[i] == 0) continue;

  //   cout << i << " : " << arr[i] << endl;
  // }

  // NOTE --- Another Solution

  // long long cn;
  // for (char i = 'a'; i <= 'z'; ++i) {
  //   cn = 0;

  //   for (int j = 0; j < s.length(); ++j)
  //     if (i == s[j]) ++cn;

  //   if (cn != 0) cout << i << " : " << cn << endl;
  // }

  // NOTE --- Another Solution Using ' #include <algorithm> ' library "Simpler solution"

  for (char i = 'a'; i <= 'z'; ++i) {
    long long cn = count(s.begin(), s.end(), i);

    if (cn != 0) cout << i << " : " << cn << endl;
  }

  return 0;
}