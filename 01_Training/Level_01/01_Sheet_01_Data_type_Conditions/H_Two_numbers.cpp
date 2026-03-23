/**
 * Author: Hossam (HossamGezo)
 * Problem: H_Two_numbers
 * Source: Assiut University Training - Sheet #1
 * Link: https://codeforces.com/group/MWSDmqGsZm/contest/219158/problem/H
 */

#include <iostream>
#include <math.h>
using namespace std;

int main() {
  double a, b;

  cin >> a >> b;

  cout << "floor " << a << " / " << b << " = " <<  floor(a / b) << endl;
  cout << "ceil " << a << " / " << b <<  " = " << ceil(a / b) << endl;
  cout << "round " << a << " / " << b << " = " << round(a / b);

  return 0;
}