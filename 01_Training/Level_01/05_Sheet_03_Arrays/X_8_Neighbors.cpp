/**
 * Author: Hossam (HossamGezo)
 * Problem: X 8 Neighbors
 * Source: Assiut University Training - Sheet #3
 * Link: https://codeforces.com/group/MWSDmqGsZm/contest/219774/problem/X
 */

#include <iostream>
using namespace std;

int main() {
  int n, m, x, y;
  bool f = true;

  cin >> n >> m;

  char arr[n][m];

  for (int i = 0; i < n; ++i)
    for (int j = 0; j < m; ++j) cin >> arr[i][j];

  cin >> x >> y;

  --x;
  --y;

  // if (arr[x][y + 1] == '.') f = false;
  // if (arr[x][y - 1] == '.') f = false;
  // if (arr[x - 1][y] == '.') f = false;
  // if (arr[x + 1][y] == '.') f = false;
  // if (arr[x + 1][y - 1] == '.') f = false;
  // if (arr[x - 1][y + 1] == '.') f = false;
  // if (arr[x + 1][y + 1] == '.') f = false;
  // if (arr[x - 1][y - 1] == '.') f = false;

  // if (f)
  //   cout << "yes";
  // else
  //   cout << "no";

  // NOTE --- Another Solution Note: "Simpler solution"

  if (arr[x][y + 1] == '.' || arr[x][y - 1] == '.' || arr[x - 1][y] == '.' ||
      arr[x + 1][y] == '.' || arr[x + 1][y - 1] == '.' || arr[x - 1][y + 1] == '.' ||
      arr[x + 1][y + 1] == '.' || arr[x - 1][y - 1] == '.')
    return cout << "no", 0;

  cout << "yes";

  // NOTE --- Another Solution Note: Using ' #include <algorithm> ' library

  // arr[x][y] == 'x';

  // if (arr[x][min(m - 1, y + 1)] == 'x' && arr[x][max(0, y - 1)] == 'x' &&
  //     arr[max(0, x - 1)][y] == 'x' && arr[min(n - 1, x + 1)][y] == 'x' &&
  //     arr[min(n - 1, x + 1)][max(0, y - 1)] == 'x' &&
  //     arr[max(0, x - 1)][min(m - 1, y + 1)] == 'x' &&
  //     arr[min(n - 1, x + 1)][min(m - 1, y + 1)] == 'x' && arr[max(0, x - 1)][max(0, y - 1)] ==
  //     'x')
  //   return cout << "yes", 0;

  // cout << "no";

  // NOTE --- Code explanation

  // cout << "------------------------- Right & Left\n";
  // cout << arr[x][y + 1] << endl;  // Right ➡️
  // cout << arr[x][y - 1] << endl;  // Left  ⬅️

  // cout << "------------------------- Up & Down\n";
  // cout << arr[x - 1][y] << endl;  // Up   ⬆️
  // cout << arr[x + 1][y] << endl;  // Down ⬇️

  // cout << "------------------------- Primary digonal \n";
  // cout << arr[x - 1][y + 1] << endl;  // Top Right   ↗️
  // cout << arr[x - 1][y - 1] << endl;  // Top  Left   ↖️

  // cout << "------------------------- Secondary\n";
  // cout << arr[x + 1][y + 1] << endl;  // Bottom Right ↘️
  // cout << arr[x + 1][y - 1] << endl;  // Bottom Left  ↙️

  return 0;
}