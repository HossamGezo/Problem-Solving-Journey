/**
 * Author: Hossam (HossamGezo)
 * Problem: N_Char
 * Source: Assiut University Training - Sheet #1
 * Link: https://codeforces.com/group/MWSDmqGsZm/contest/219158
 */

#include <iostream>
using namespace std;

int main() {
  char x;

  cin >> x;

  if (x < 97)
    cout << char(x + 32);
  else
    cout << char(x - 32);

  return 0;
}