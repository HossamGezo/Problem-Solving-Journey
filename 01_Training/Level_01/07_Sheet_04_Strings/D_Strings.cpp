/**
 * Author: Gezo
 * Problem: D Strings
 * Source: Assiut University Training - Sheet #4
 * Link: https://codeforces.com/group/MWSDmqGsZm/contest/219856/problem/D
 */

#include <algorithm>
#include <iostream>
#include <string>
using namespace std;

int main() {
  string a, b;

  cin >> a >> b;

  cout << a.length() << " " << b.length() << endl;

  cout << a + b << endl;

  swap(a[0], b[0]);

  cout << a << " " << b;

  return 0;
}