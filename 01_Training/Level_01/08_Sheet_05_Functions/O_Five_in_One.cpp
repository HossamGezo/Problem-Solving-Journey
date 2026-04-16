/**
 * Author: Gezo
 * Problem: O Five in One
 * Source: Assiut University Training - Sheet #5
 * Link: https://codeforces.com/group/MWSDmqGsZm/contest/223205/problem/O
 */

#include <algorithm>
#include <iostream>
#include <limits>
#include <string>
using namespace std;

int mn = INT_MAX, mx = INT_MIN;

void get_menimum(int arr[], int n) {
  for (int i = 0; i < n; ++i) mn = min(mn, arr[i]);

  cout << "The minimum number : " << mn << endl;
}

void get_maximum(int arr[], int n) {
  for (int i = 0; i < n; ++i) mx = max(mx, arr[i]);

  cout << "The maximum number : " << mx << endl;
}

void get_primes(int arr[], int n) {
  int cn = 0;

  for (int i = 0; i < n; ++i) {
    bool is_prime = true;

    if (arr[i] < 2) continue;

    if (arr[i] == 2 || arr[i] == 3) {
      ++cn;
      continue;
    }

    if (arr[i] % 2 == 0 || arr[i] % 3 == 0) continue;

    for (int j = 5; j * j <= arr[i]; j += 6) {
      if (arr[i] % j == 0 || arr[i] % (j + 2) == 0) {
        is_prime = false;
        break;
      }
    }

    if (is_prime) ++cn;
  }

  cout << "The number of prime numbers : " << cn << endl;
}

void get_palindrome(int arr[], int n) {
  int cn = 0;

  for (int i = 0; i < n; ++i) {
    string s = to_string(arr[i]), m = s;

    reverse(s.begin(), s.end());

    if (s == m) ++cn;
  }

  cout << "The number of palindrome numbers : " << cn << endl;
}

void get_max_divisors(int arr[], int n) {
  int num = INT_MIN, mx = INT_MIN;

  for (int i = 0; i < n; ++i) {
    int cn = 0;

    for (int j = 1; j * j <= arr[i]; ++j) {
      if (arr[i] % j == 0) {
        if (j * j == arr[i])
          ++cn;
        else
          cn += 2;
      }
    }

    if (mx < cn) {
      mx = cn;
      num = arr[i];
    } else if (mx == cn) {
      num = max(num, arr[i]);
    }
  }

  cout << "The number that has the maximum number of divisors : " << num << endl;
}

int main() {
  int n;

  cin >> n;

  int arr[n];

  for (int i = 0; i < n; ++i) cin >> arr[i];

  get_maximum(arr, n);

  get_menimum(arr, n);

  get_primes(arr, n);

  get_palindrome(arr, n);

  get_max_divisors(arr, n);

  return 0;
}