// 영어 단어 복구 (문자열 컨트롤)
#include <iostream>
#include <iostream>
#include <string>
#include <cctype>
using namespace std;

int main() {
  string input="bE   au  T I fu  L";
  string ans="";
  for(int i=0;i<input.length();i++){
    if(input[i]!=' ') ans+=tolower(input[i]);
  }
  cout<<ans;
  return 0;
}