/**
 * Author: Gezo
 * Problem: H Data Type Guessing
 * Source: Assiut University Training - Contest #1
 * Link: https://codeforces.com/group/MWSDmqGsZm/contest/326175/problem/H
 */

#include <iostream>
using namespace std;

int main() {
  long long n, k, a, r;

  cin >> n >> k >> a;

  r = n * k / a;

  if (((n * k) % a))
    cout << "double";
  else if (r <= 2147483647)
    cout << "int";
  else
    cout << "long long";

  return 0;
}