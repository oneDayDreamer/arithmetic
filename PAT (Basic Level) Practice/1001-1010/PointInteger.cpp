/*
1006 换个格式输出整数 (15 分)
*/
#include <iostream>
using namespace std;
int main(){
     std::ios::sync_with_stdio(false);
        int n; cin >> n;//234
        int one = n % 10;
        int ten = n % 100 / 10;
        int thous = n / 100;

        for(int i =0;i < thous ;i++){
              cout << "B";
        }
        for(int j =0;j < ten ;j++){
              cout << "S";
        }
      for(int k =1;k <= one;k++){
              cout << k;
      }
    return 0;
}