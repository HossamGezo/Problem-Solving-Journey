/**
 * Author: Hossam (HossamGezo)
 * Problem: A Timon and Pumbaa
 * Source: Assiut University Training - Contest #2
 * Link: https://codeforces.com/group/MWSDmqGsZm/contest/326907/problem/A
 */

#include <iostream>
using namespace std;

int main() {
  int a, b;

  cin >> a >> b;

  if (a - b >= 0)
    cout << a - b;
  else
    cout << 0;

  return 0;
}