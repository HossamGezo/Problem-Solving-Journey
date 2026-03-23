/**
 * Author: Hossam (HossamGezo)
 * Problem: O_Calculator
 * Source: Assiut University Training - Sheet #1
 * Link: https://codeforces.com/group/MWSDmqGsZm/contest/219158/problem/O
 */

#include <iostream>
#include <math.h>
using namespace std;

int main() {
  long long a, b;
  char s;

  cin >> a >> s >> b;

  if (s == '+')
    cout << a + b;
  else if (s == '-')
    cout << a - b;
  else if (s == '*')
    cout << a * b;
  else
    cout << a / b;

  return 0;
}