#include <bits/stdc++.h>
#include <iostream>
using namespace std;

int main() {
  int A, B;
  cin >> A >> B;

  string a, b;
  int x = 0, y = 0;

  while (x < A) {
    a.append("]");
    x++;
  }

  while (y < B) {
    b.append("]");
    y++;
  }

  cout << "A:" << a << endl;
  cout << "B:" << b << endl;
}
