#include <bits/stdc++.h>
#include <iostream>
using namespace std;

int main() {
  string S;
  cin >> S;

  int count = 0;
  for (int i = 0; i < S.size(); i++) {
    if (S[0] == '1' && i == 0) {
      count++;
      continue;
    }
    if (S.at(i) == '+') {
      count++;
      continue;
    }
    if (S.at(i) == '-') {
      count--;
      continue;
    }
  }
  cout << count << endl;
}
