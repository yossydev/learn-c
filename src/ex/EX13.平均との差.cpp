#include <bits/stdc++.h>
#include <iostream>
using namespace std;

int main() {
  int N;
  cin >> N;
  vector<int> math(N);

  int average = 0;
  vector<int> foo = {2, 1, 4};
  for (int i = 0; i < N; i++) {
    cin >> math.at(i);
    // math.at(i) = foo[i];
    int sum = accumulate(math.begin(), math.end(), 0);
    average = sum / N;
  }

  for (int i = 0; i < N; i++) {
    int result = average - math.at(i);
    if (result < 0) {
      cout << -result << endl;
      continue;
    }
    cout << result << endl;
  }
}
