/**
 * Author: Hossam (HossamGezo)
 * Problem: G Construct the Sum
 * Source: Assiut University Training - Contest #2
 * Link: https://codeforces.com/group/MWSDmqGsZm/contest/326907/problem/G
 */

#include <iostream>
using namespace std;

int main() {
  int t;
  long long n, s, sum;

  cin >> t;

  while (t--) {
    cin >> n >> s;

    if (n >= s)
      cout << s << endl;
    else {
      if ((n * (n + 1) / 2) < s)
        cout << -1 << endl;
      else {
        sum = n;

        cout << n << " ";

        while (true) {
          if (sum + (n - 1) < s) {
            sum += (n - 1);
            cout << n - 1 << " ";
          }

          if (sum + (n - 1) == s) {
            cout << n - 1;
            break;
          }

          --n;
        }

        cout << endl;
      }
    }
  }

  return 0;
}