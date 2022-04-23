/*
1007 素数对猜想 (20 分)
现给定任意正整数N
请计算不超过N的满足猜想的素数对的个数。
*/
#include <iostream>
using namespace std;
#include <math.h>
bool isPrime(int x){
         for(int j=2;j<=sqrt(x);j++ ){
             if(x%j==0){
               return false;
             }
         }
         return true;
}
int main(){
      std::ios::sync_with_stdio(false);
     int n; cin >> n;

      int count = 0;
     for(int i=2;i<n;i++){
           if(isPrime(i) && isPrime(i+2) && i+2<=n){//i是质数，i+2是质数，i+2不超过输入的值
                 count++;
           }
     }
      cout << count;

    return 0;
}