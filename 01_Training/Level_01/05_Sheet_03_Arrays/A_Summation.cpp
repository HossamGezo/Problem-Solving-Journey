/**
 * Author: Hossam (HossamGezo)
 * Problem: A Summation
 * Source: Assiut University Training - Sheet #3
 * Link: https://codeforces.com/group/MWSDmqGsZm/contest/219774/problem/A
 */

#include <cmath>
#include <iostream>
using namespace std;

int main() {
  // int t, n;
  // long long sum = 0;

  // cin >> t;

  // while (t--) {
  //   cin >> n;

  //   sum += n;
  // }

  // if (sum < 0)
  //   cout << sum * -1;
  // else
  //   cout << sum;

  // NOTE --- Another Solution Using ' #include <cmath> ' library & Array

  int n;
  long long sum = 0;

  cin >> n;

  int arr[n];

  for (int i = 0; i < n; ++i) {
    cin >> arr[i];

    sum += arr[i];
  }

  cout << abs(sum);

  return 0;
}