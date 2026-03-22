/**
 * Author: Hossam (HossamGezo)
 * Problem: R_Age_in_Days
 * Source: Assiut University Training - Sheet #1
 * Link: https://codeforces.com/group/MWSDmqGsZm/contest/219158
 */

#include <iostream>
using namespace std;

int main() {
  long long n;

  cin >> n;

  cout << n / 365 << " years\n";
  cout << (n % 365) / 30 << " months\n";
  cout << (n % 365) % 30 << " days";

  return 0;
}