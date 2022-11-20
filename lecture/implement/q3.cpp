// 진약수의 합

#include <iostream>
using namespace std;

int main() {

  int N, sum = 0;
  cin >> N;
  for (int i = 1; i < N; i++) {
    if (N % i == 0) {
      cout << i << endl;
      sum += i;
    }
  }
  cout << sum;

  return 0;
}