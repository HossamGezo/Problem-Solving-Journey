/**
 * Author: Hossam (HossamGezo)
 * Problem: A_Winter_Sale
 * Source: Assiut University Training - Contest #1
 * Link: https://codeforces.com/group/MWSDmqGsZm/contest/326175/problem/A
 */

#include <iostream>
#include <iomanip>
using namespace std;

int main() {
  double x, p;

  cin >> x >> p;

  cout << fixed << setprecision(2);
  cout << p + (x * p) / (100 - x);

  return 0;
}