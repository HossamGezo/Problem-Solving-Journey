/**
 * Author: Hossam (HossamGezo)
 * Problem: P_First_digit
 * Source: Assiut University Training - Sheet #1
 * Link: https://codeforces.com/group/MWSDmqGsZm/contest/219158
 */

#include <iostream>
using namespace std;

int main() {
  int x;

  cin >> x;

  if((x / 1000) % 2)
    cout << "ODD";
  else
    cout << "EVEN";

  return 0;
}