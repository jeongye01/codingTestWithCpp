// 나이 계산 
#include <iostream>
#include <string>
using namespace std;

int main() {
  string number;
  int age, offset = 48;
  char gender = 'M';
  cin >> number;
  if (number[7] == '1' || number[7] == '2') {
    if (number[7] == '2')
      gender = 'W';
    age = 2019 - (1900 + (number[0] - offset) * 10 + (number[1] - offset)) + 1;
    cout << age << " " << gender << endl;
  } else {
    if (number[7] == '4')
      gender = 'W';
    age = 2019 - (2000 + (number[0] - offset) * 10 + (number[1] - offset)) + 1;
    cout << age << " " << gender << endl;
  }
}