/**
 * Author: Hossam (HossamGezo)
 * Problem: G_Summation_from_1_to_N
 * Source: Assiut University Training - Sheet #1
 * Link: https://codeforces.com/group/MWSDmqGsZm/contest/219158/problem/G
 */

#include <iostream>
using namespace std;

int main() {
  long long n;

  cin >> n;

  cout << (n * (n + 1 )) / 2;

  return 0;
}