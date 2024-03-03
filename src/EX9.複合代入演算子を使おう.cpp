#include <bits/stdc++.h>
#include <iostream>
using namespace std;

int main() {
  int x, a, b;
  cin >> x >> a >> b;

  // 1.の出力
  x++;
  cout << x << endl;

  // 2. の出力
  int y = x * (a + b);
  cout << y << endl;

  // 3. の出力
  int z = y * y;
  cout << z << endl;

  // 4. の出力
  cout << z - 1 << endl;
}
