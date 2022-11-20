// 자연수의 합
#include <iostream>

using namespace std;

int main() {
  int A, B, sum = 0;
  cin >> A >> B;
  for (int i = A; i <= B; i++) {
    if (i != B) {
      cout << i << "+ ";
    } else {
      cout << i << "= ";
    }
    sum+=i;
  }
  cout << sum;

  return 0;
}