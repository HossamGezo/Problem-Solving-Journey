/**
 * Author: Hossam (HossamGezo)
 * Problem: Q_Coordinates_of_a_Point
 * Source: Assiut University Training - Sheet #1
 * Link: https://codeforces.com/group/MWSDmqGsZm/contest/219158
 */

#include <iostream>
using namespace std;

int main() {
  float x, y;

  cin >> x >> y;

  if (x > 0 && y > 0)
    cout << "Q1";
  else if (x < 0 && y > 0)
    cout << "Q2";
  else if (x < 0 && y < 0)
    cout << "Q3";
  else if (x > 0 && y < 0)
    cout << "Q4";
  else if (x == 0 && y == 0)
    cout << "Origem";
  else if (x == 0)
    cout << "Eixo Y";
  else
    cout << "Eixo X";

return 0;
}