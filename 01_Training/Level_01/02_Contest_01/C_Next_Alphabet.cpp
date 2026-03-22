/**
 * Author: Hossam (HossamGezo)
 * Problem: C_Next_Alphabet
 * Source: Assiut University Training - Contest #1
 * Link: https://codeforces.com/group/MWSDmqGsZm/contest/326175/problem/C
 */

#include <iostream>
using namespace std;

int main() {
  char c;

  cin >> c;

  if (c == 'z')
    cout << 'a';
  else
    cout << char(c + 1);

  return 0;
}