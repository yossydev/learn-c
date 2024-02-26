#include <bits/stdc++.h>
#include <iostream>
using namespace std;

// https://atcoder.jp/contests/apg4b/tasks/APG4b_g
int main() {
  // 入力は5だとしています。
  int x;
  cin >> x;

  if (x < 10) {
    cout << "xは10より小さい" << endl;
  }

  if (x >= 20) {
    cout << "xは20以上" << endl;
  }

  if (x == 5) {
    cout << "xは5" << endl;
  }

  if (x != 100) {
    cout << "xは100ではない" << endl;
  }

  cout << "終了" << endl;
}
