#include <stdio.h>
#include <math.h>
/*
你的程序要读入一个非负整数，整数的范围是[0,1000000]，然后按照上述算法计算出表示奇偶性的那个二进制数字，输出它对应的十进制值。
提示：将整数从右向左分解，数位每次加1，而二进制值每次乘2。
输入格式:
一个非负整数，整数的范围是[0,1000000]
输出格式：
一个整数，表示计算结果
输入样例：
342315 
输出样例：
13
*/
int main()
{
	long long o1;
	scanf("%lld",&o1);
	
	
	int n;
  long long sum = 0;
	int m = 0;
	while(o1 != 0){
	
	 n = o1 % 10;
	 o1 /= 10;
	sum += n*pow(2,m);
	 	
	 	m++;
	}
	printf("%lld",sum);
	return 0;
}
