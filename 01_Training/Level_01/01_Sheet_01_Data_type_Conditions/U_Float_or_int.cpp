/**
 * Author: Gezo
 * Problem: U Float or int
 * Source: Assiut University Training - Sheet #1
 * Link: https://codeforces.com/group/MWSDmqGsZm/contest/219158/problem/U
 */

#include <cmath>
#include <iostream>
using namespace std;

int main() {
  double n;

  cin >> n;

  // if (!(n - floor(n)))
  //   cout << "int " << floor(n);
  // else
  //   cout << "float " << floor(n) << " " << n - floor(n);

  // NOTE --- Another Solution Without using ' #include <cmath> ' library

  // if (!(n - int(n)))
  //   cout << "int " << int(n);
  // else
  //   cout << "float " << int(n) << " " << n - int(n);

  // NOTE --- Another Solution Without using ' #include <cmath> ' library "Simpler solution"

  int m = n;

  if (n == m)
    cout << "int " << m;
  else
    cout << "float " << m << " " << n - m;

  return 0;
}