/**
 * Author: Gezo
 * Problem: B Memo and Momo
 * Source: Assiut University Training - Contest #1
 * Link: https://codeforces.com/group/MWSDmqGsZm/contest/326175/problem/B
 */

#include <iostream>
using namespace std;

int main() {
  long long a, b, k;

  cin >> a >> b >> k;

  if (a % k == 0 && b % k == 0)
    cout << "Both";
  else if (a % k == 0)
    cout << "Memo";
  else if (b % k == 0)
    cout << "Momo";
  else
    cout << "No One";

  return 0;
}