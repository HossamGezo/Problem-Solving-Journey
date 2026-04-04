/**
 * Author: Gezo
 * Problem: W Mathematical Expression
 * Source: Assiut University Training - Sheet #1
 * Link: https://codeforces.com/group/MWSDmqGsZm/contest/219158/problem/W
 */

#include <iostream>
using namespace std;

int main() {
  int a, b, c;
  char s, q;

  cin >> a >> s >> b >> q >> c;

  if (s == '+' && a + b == c)
    cout << "Yes";
  else if (s == '-' && a - b == c)
    cout << "Yes";
  else if (s == '*' && a * b == c)
    cout << "Yes";
  else {
    if (s == '+')
      cout << a + b;
    else if (s == '-')
      cout << a - b;
    else
      cout << a * b;
  }

  return 0;
}