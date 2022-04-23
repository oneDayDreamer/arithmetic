#include <stdio.h>
/*
1001 害死人不偿命的(3n+1)猜想 (15 分)
*/
int main(){
   //对任何一个正整数 n，如果它是偶数，那么把它砍掉一半；如果它是奇数，那么把 (3n+1) 砍掉一半。
   //需要多少步（砍几下）才能得到 n=1
     int n;
     scanf("%d",&n);//3
     int count = 0;//用来统计步数
     while(n != 1){
            if(n%2==0){//偶数时
                n /= 2;       
            }else{
                n = (3*n+1)/2; //奇数时    
            }
            count++;//每进行一次计算就让count+1
     }
      printf("%d",count);

    return 0;
}





