/**
 * Author: Hossam (HossamGezo)
 * Problem: N Check Code
 * Source: Assiut University Training - Sheet #3
 * Link: https://codeforces.com/group/MWSDmqGsZm/contest/219774/problem/N
 */

#include <iostream>
using namespace std;

int main() {
  int a, b, idx;

  cin >> a >> b;

  char arr[a + b + 1];

  for (int i = 0; i < a + b + 1; ++i) {
    cin >> arr[i];

    if (arr[i] == '-') idx = i;
  }

  if (a == idx)
    cout << "Yes";
  else
    cout << "No";

  return 0;
}