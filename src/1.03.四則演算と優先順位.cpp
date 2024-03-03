#include <bits/stdc++.h>
#include <iostream>
using namespace std;

int main() {
  cout << 1 + 1 << endl; // 2 足し算
  cout << 3 - 4 << endl; // -1 引き算
  cout << 2 * 3 << endl; // 6 掛け算
  cout << 7 / 3 << endl; // 2 割り算

  // 余剰計算
  cout << 7 % 3 << endl; // 1
  cout << 4 % 5 << endl; // 4

  // 演算の優先順位を変える
  cout << (1 + 2) * 3 << endl; // 9

  // 0で割ると実行時エラーが発生する
  // cout << 3 / 0 << endl;
}
