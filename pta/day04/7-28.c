#include <stdio.h> 
/*
7-28 求整数的位数及各位数字之和 (15 分)
对于给定的正整数N，求它的位数及其各位数字之和。

输入格式：
输入在一行中给出一个不超过10的9次方的正整数N。

输出格式：
在一行中输出N的位数及其各位数字之和，中间用一个空格隔开。

输入样例：
321
输出样例：
3 6
*/
int main(){
  
  int n,location;
  int sum = 0;
  
  
  scanf("%d",&n);
  
  while(n!=0){//321
  	location++;//记录数的位数 
  	sum += n%10;//从右往左取每一位的值，然后累加到sum
      n /= 10; 
  }

printf("%d %d",location,sum);
    return 0;
}

