/**
 * Author: Hossam (HossamGezo)
 * Problem: S Interval
 * Source: Assiut University Training - Sheet #1
 * Link: https://codeforces.com/group/MWSDmqGsZm/contest/219158/problem/S
 */

#include <iostream>
using namespace std;

int main() {
  double x;

  cin >> x;

  if (x > 0 && x < 101) {
    if (x <= 25)
      cout << "Interval [0,25]";
    else if (x <= 50)
      cout << "Interval (25,50]";
    else if (x <= 75)
      cout << "Interval (50,75]";
    else
      cout << "Interval (75,100]";
  } else
    cout << "Out of Intervals";

  return 0;
}