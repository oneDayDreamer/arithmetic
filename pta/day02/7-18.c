#include <stdio.h>
/*
7-18 ���⳵�Ƽ� (15 ��)
����Ҫ�����ĳ������ͨ���⳵�շѱ�׼��д������г��Ѽ��㡣�����׼���£�

�����Ϊ3����𲽷�10Ԫ��
������̺�10�����ڣ�ÿ����2Ԫ��
����10�������ϵĲ��ּ���50%�Ļؿղ����ѣ���ÿ����3Ԫ��
Ӫ�˹����У���·�輰�˿�Ҫ����ʱͣ���ģ���ÿ5����2Ԫ���գ�����5�������շѣ���

��������1:
2.6 2
�������1:
10
��һ��������˿�Ӧ֧���ĳ��ѣ���λΪԪ��������������룬������Ԫ��
*/
int main()
{
 	double kilo;
 	int wait;
 
    double price;
    double sum;
    double waitPrice;
    
   scanf("%lf %d",&kilo,&wait);
     waitPrice = 2*(wait/5);
	if(kilo <= 3.0){
	price = 10;
}else if(kilo <=10.0){
	price = 10 + (kilo-3)*2;
}else{
	price = 24 + (kilo-10)*3; 
     }
     
     sum = (int)(price + waitPrice + 0.5);
  
 	
 	printf("%.0f",sum);
	return 0;
}
