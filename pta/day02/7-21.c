#include <stdio.h>
/*
7-21 超速判断 (10 分)
模拟交通警察的雷达测速仪。输入汽车速度，如果速度超出60 mph，则显示“Speeding”，否则显示“OK”。
输入格式：
输入在一行中给出1个不超过500的非负整数，即雷达测到的车速。
输出格式：
在一行中输出测速仪显示结果，格式为：Speed: V - S，其中V是车速，S或者是Speeding、或者是OK。
输入样例1：
40
输出样例1：
Speed: 40 - OK
*/
int main()
{
	unsigned i1;
	scanf("%d",&i1);
	if(i1 <= 60){
		printf("Speed: %d - OK",i1);
	}else{
		printf("Speed: %d - Speeding",i1);
	}
		
	
	return 0;
}
