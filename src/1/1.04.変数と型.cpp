#include <bits/stdc++.h>
using namespace std;

int main() {
  int name1;
  name1 = 10;
  cout << name1 << endl;     // 10
  cout << name1 + 2 << endl; // 10 + 2 → 12
  cout << name1 * 3 << endl; // 10 * 3 → 30

  // 変数の初期化
  int name2 = 10;
  cout << name2 << endl;

  // 変数を同時に宣言
  int a = 10, b = 5;
  cout << a << endl;
  cout << b << endl;

  // 基本的な型
  int i = 30;
  double d = 1.5;
  string s = "Hello";
 
  cout << i + d << endl; // 31.5
  cout << i * d << endl; // 45
  cout << 45 / 2 << endl; // 22 小数点以下切り捨て
  cout << i * d / 2 << endl; // 22.5 小数点以下も残る
  /*
  以下の処理はコンパイルエラー
  cout << s + i << endl; // string型とint型
  cout << s * i << endl; // string型とint型
  cout << s + d << endl; // string型とdouble型
  */
}
