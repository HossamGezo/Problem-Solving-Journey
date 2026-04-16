/**
 * Author: Gezo
 * Problem: I Swapping With Matrix
 * Source: Assiut University Training - Sheet #5
 * Link: https://codeforces.com/group/MWSDmqGsZm/contest/223205/problem/I
 */

#include <algorithm>
#include <iostream>
using namespace std;

const int MAX = 505;
int arr[MAX][MAX];

void solve(int n, int x, int y) {
  for (int i = 0; i < n; ++i) swap(arr[x][i], arr[y][i]);

  for (int i = 0; i < n; ++i) swap(arr[i][x], arr[i][y]);

  for (int i = 0; i < n; ++i) {
    for (int j = 0; j < n; ++j) cout << arr[i][j] << " ";
    cout << endl;
  }
}

int main() {
  int n, x, y;

  cin >> n >> x >> y;

  --x;
  --y;

  for (int i = 0; i < n; ++i)
    for (int j = 0; j < n; ++j) cin >> arr[i][j];

  solve(n, x, y);

  return 0;
}

/*

    1  7  7   2
    0  4  -5  3
    3  2  1   -5
    5  6  40  11

 */

/*

    3  2  1   -5
    0  4  -5  3
    1  7  7   2
    5  6  40  11

 */

/*

    1   2  3  -5
    -5  4  0  3
    7   7  1  2
    40  6  5  11

*/