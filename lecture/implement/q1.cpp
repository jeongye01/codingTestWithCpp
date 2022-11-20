// 1부터 N까지의 배수 합
#include <iostream>

using namespace std;
// :: -> 범위 지정 연산자 
int main() {
  int N, M, sum = 0;
  cin >> N >> M;
  for (int i = 1; i <= N; i++) {
    if (i % M == 0)
      sum += i;
  }
  cout << sum << endl;

  return 0;
}