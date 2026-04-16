/**
 * Author: Gezo
 * Problem: C Wonderful Number
 * Source: Assiut University Training - Sheet #4
 * Link: https://codeforces.com/group/MWSDmqGsZm/contest/223205/problem/C
 */

#include <algorithm>
#include <iostream>
#include <string>
using namespace std;

bool is_odd(int n) {
  return n % 2;
}

bool is_palindrome(int n) {
  string b = "", s = "";

  while (n) {
    b += n % 2;

    n /= 2;
  }

  s = b;

  reverse(s.begin(), s.end());

  return s == b;
}

int main() {
  int n;

  cin >> n;

  if (is_odd(n) && is_palindrome(n))
    cout << "YES";
  else
    cout << "NO";

  return 0;
}