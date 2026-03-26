/**
 * Author: Hossam (HossamGezo)
 * Problem: E Hady Rides the Train
 * Source: Assiut University Training - Contest #2
 * Link: https://codeforces.com/group/MWSDmqGsZm/contest/326907/problem/E
 */

#include <iostream>
using namespace std;

int main() {
  long long n;

  cin >> n;

  cout << n / 4 << " ";

  if ((n / 4) % 2 == 0)
    cout << n % 4;
  else
    cout << 3 - n % 4 << endl;

  return 0;
}