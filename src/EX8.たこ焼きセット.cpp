#include <bits/stdc++.h>
#include <iostream>
#include <iterator>
using namespace std;

int main() {
  int p;
  string text;
  int price;
  cin >> p;

  // パターン1
  if (p == 1) {
    cin >> price;
  }

  // パターン2
  if (p == 2) {
    cin >> text >> price;
  }

  int N;
  cin >> N;

  if (!empty(text)) {
    cout << text << "!" << endl;
    cout << price * N << endl;
  } else {
    cout << price * N << endl;
  }
}
