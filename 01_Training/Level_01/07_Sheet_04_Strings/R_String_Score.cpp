/**
 * Author: Gezo
 * Problem: R String Score
 * Source: Assiut University Training - Sheet #4
 * Link: https://codeforces.com/group/MWSDmqGsZm/contest/219856/problem/R
 */

#include <iostream>
#include <string>
using namespace std;

int main() {
  int n;
  string s;
  long long cn = 0;

  cin >> n >> s;

  for (int i = 0; i < n; ++i) {
    if (s[i] == 'V')
      cn += 5;
    else if (s[i] == 'W')
      cn += 2;
    else if (s[i] == 'X')
      i++;
    else if (s[i] == 'Y') {
      i++;
      s.push_back(s[i]);
      n++;
    } else {
      if (s[i + 1] == 'V') {
        cn /= 5;
        i++;
      } else if (s[i + 1] == 'W') {
        cn /= 2;
        i++;
      }
    }
  }

  cout << cn;

  return 0;
}