#include <stdio.h>
/*
7-26 ���Լ������С������ (15 ��)
����Ҫ���������������������Լ������С��������
�����ʽ:
������һ���и�������������M��N����1000����
�����ʽ:
��һ����˳�����M��N�����Լ������С�������������ּ���1�ո�ָ���
��������:
511 292
�������:
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
