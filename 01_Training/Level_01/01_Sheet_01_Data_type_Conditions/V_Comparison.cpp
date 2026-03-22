/**
 * Author: Hossam (HossamGezo)
 * Problem: V_Comparison
 * Source: Assiut University Training - Sheet #1
 * Link: https://codeforces.com/group/MWSDmqGsZm/contest/219158
 */

#include <iostream>
using namespace std;

int main() {
  int a, b;
  char s;

  cin >> a >> s >> b;

  if (s == '<' && a < b)
    cout << "Right";
  else if (s == '>' && a > b)
    cout << "Right";
  else if (s == '=' && a == b)
    cout << "Right";
  else
    cout << "Wrong";

  return 0;
}