#include <stdio.h>
/*
7-26 最大公约数和最小公倍数 (15 分)
本题要求两个给定正整数的最大公约数和最小公倍数。
输入格式:
输入在一行中给出两个正整数M和N（≤1000）。
输出格式:
在一行中顺序输出M和N的最大公约数和最小公倍数，两数字间以1空格分隔。
输入样例:
511 292
输出样例:
73 2044
*/
int main(){
	
	
int num1,num2;
scanf("%d %d",&num1,&num2);

int a = num1;
int b = num2;

int t;
int e;
while(num2!=0){
	
	t =num1 % num2;
     num1 = num2;
     num2 = t;
}
	e = (a*b)/num1;
	
	printf("%d %d",num1,e);
	
	return 0;
}

