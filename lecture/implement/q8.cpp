// 올바른 괄호 (문자열 컨트롤)
int main() {
  string input="(()(()))(()";
  string ans="YES";
int open=0,close=0;
  for(int i=0;i<input.length();i++){
    if(input[i]=='('){
      open++;
    }
    else{
      close++;
    }
    if(open<close){
      ans="NO";
      break;
    }
  }
 
  cout<<ans;
  return 0;
}