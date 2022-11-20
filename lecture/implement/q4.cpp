// 나이 차이
#include <algorithm>
#include <iostream>
#include <vector>
using namespace std;

/*
  int main() {

  int N, ans = 0;
  int ages[10] = { 13, 15, 34, 23, 45, 65, 33, 11, 26, 42 };
  sort(ages,ages+10);
  ans=ages[9]-ages[0];
  cout << ans << endl;

  return 0;
}
*/

//파일 입출력
int main() {
 // rt => read text
  freopen("input.txt", "rt", stdin);
  int n, a, max = 2147000000, min = 2147000000;
  cin >> n;
  for (int i = 1; i <= n; i++) {
    cin >> a;
    if (a > max)
      max = a;
    if (a < min)
      min = a;
  }
  cout << max - min;
  return 0;
}