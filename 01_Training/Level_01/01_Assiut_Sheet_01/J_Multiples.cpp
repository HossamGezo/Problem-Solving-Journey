/**
 * Author: Hossam (HossamGezo)
 * Problem: J_Multiples
 * Source: Assiut University Training - Sheet #1
 * Link: https://codeforces.com/group/MWSDmqGsZm/contest/219158
 */

#include <iostream>
using namespace std;

int main() {
  long long a, b;

  cin >> a >> b;

  if (a % b == 0 || b % a == 0)
    cout << "Multiples";
  else
    cout << "No Multiples";
    
  return 0;
}