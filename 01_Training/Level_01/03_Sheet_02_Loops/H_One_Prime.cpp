/**
 * Author: Hossam (HossamGezo)
 * Problem: H One Prime
 * Source: Assiut University Training - Sheet #2
 * Link: https://codeforces.com/group/MWSDmqGsZm/contest/219432/problem/H
 */

#include <iostream>
using namespace std;

int main() {
  int n;

  cin >> n;

  for (int i = 2; i < n; ++i) {
    if (n != 2 && n % i == 0) {
      cout << "NO";
      return 0;
    }
  }

  cout << "YES";

  return 0;
}