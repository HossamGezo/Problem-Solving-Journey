/**
 * Author: Hossam (HossamGezo)
 * Problem: U_Float_or_int
 * Source: Assiut University Training - Sheet #1
 * Link: https://codeforces.com/group/MWSDmqGsZm/contest/219158/problem/U
 */

#include <iostream>
#include <math.h>
using namespace std;

int main() {
  double n;

  cin >> n;

  // if (!(n - floor(n)))
  //   cout << "int " << floor(n);
  // else
  //   cout << "float " << floor(n) << " " << n - floor(n);

  // --- Another Solution Note: Without using ' #include <math.h> ' library
  // if (!(n - int(n)))
  //   cout << "int " << int(n);
  // else
  //   cout << "float " << int(n) << " " << n - int(n);

  // --- Another Solution Note: Without using ' #include <math.h> ' library "Simpler solution"
  int m = n;
  
  if (n == m) cout << "int " << m;
  else cout << "float " << m << " " << n - m;

  return 0;
}