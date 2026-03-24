/**
 * Author: Hossam (HossamGezo)
 * Problem: M Capital or Small or Digit
 * Source: Assiut University Training - Sheet #1
 * Link: https://codeforces.com/group/MWSDmqGsZm/contest/219158/problem/M
 */

#include <iostream>
using namespace std;

int main() {
  char x;

  cin >> x;

  // if (int(x) < 65)
  //   cout << "IS DIGIT";
  // else if (int(x) < 97)
  //   cout << "ALPHA\nIS CAPITAL";
  // else
  //   cout << "ALPHA\nIS SMALL";

  // --- Another solution

  if (x < 'A')
    cout << "IS DIGIT";
  else if (x < 'a')
    cout << "ALPHA\nIS CAPITAL";
  else
    cout << "ALPHA\nIS SMALL";

  return 0;
}