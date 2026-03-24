/**
 * Author: Hossam (HossamGezo)
 * Problem: D Fixed Password
 * Source: Assiut University Training - Sheet #2
 * Link: https://codeforces.com/group/MWSDmqGsZm/contest/219432/problem/D
 */

#include <iostream>
using namespace std;

int main() {
  int n;

  while (true) {
    cin >> n;

    if (n == 1999) {
      cout << "Correct";
      break;
    } else
      cout << "Wrong\n";
  }

  return 0;
}