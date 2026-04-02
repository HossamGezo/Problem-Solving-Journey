/**
 * Author: Hossam (HossamGezo)
 * Problem: D Counting Elements
 * Source: Assiut University Training - Contest #3.1
 * Link: https://codeforces.com/group/MWSDmqGsZm/contest/329103/problem/D
 */

#include <algorithm>
#include <iostream>
using namespace std;

int main() {
  int n;
  long long sum = 0;

  cin >> n;

  int arr[n];
  int frq[1007] = {};

  for (int i = 0; i < n; ++i) {
    cin >> arr[i];
    ++frq[arr[i]];
  }

  // sort(arr, arr + n);

  // for (int i = 1; i < n; ++i)
  //   if (arr[i] - arr[i - 1] == 1) sum += frq[arr[i - 1]];

  // NOTE --- "Simpler solution"

  // for (int i = 0; i <= 1000; ++i)
  //   if (frq[i + 1]) sum += frq[i];

  // NOTE --- "Simpler solution"

  for (int i = 0; i < n; ++i)
    if (frq[arr[i] + 1]) ++sum;

  cout << sum;

  return 0;
}