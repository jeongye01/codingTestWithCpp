// 숫자만 추출 (문자열 컨트롤 : 아마존 인터뷰)

#include <iostream>
#include <string>
using namespace std;

int main() {
  int cnt = 0, num=0, mul = 1;
  string input = "gOen2Ts8eSoft";
  for (int i = input.length() - 1; i >= 0; i--) {
    if (input[i] >= 48 || input[i] <= 57) {
      num = (input[1] - 48) * mul;
      mul *= 10;
    }
  }
  cout << num << endl;
  for (int i = 1; i <= num; i++) {
    if (num % i == 0) {
      cnt++;
    }
  }
  cout << cnt << endl;

  return 0;
}