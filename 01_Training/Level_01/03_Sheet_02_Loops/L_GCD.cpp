/**
 * Author: Hossam (HossamGezo)
 * Problem: L GCD
 * Source: Assiut University Training - Sheet #2
 * Link: https://codeforces.com/group/MWSDmqGsZm/contest/219432/problem/L
 */

#include <iostream>
using namespace std;

int main() {
  int a, b, g;

  cin >> a >> b;

  for (int i = 1; i <= a; ++i)
    if (a % i == 0 && b % i == 0) g = i;

  cout << g;

  return 0;
}