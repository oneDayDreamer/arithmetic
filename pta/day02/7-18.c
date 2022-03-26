#include <stdio.h>
/*
7-18 出租车计价 (15 分)
本题要求根据某城市普通出租车收费标准编写程序进行车费计算。具体标准如下：

起步里程为3公里，起步费10元；
超起步里程后10公里内，每公里2元；
超过10公里以上的部分加收50%的回空补贴费，即每公里3元；
营运过程中，因路阻及乘客要求临时停车的，按每5分钟2元计收（不足5分钟则不收费）。

输入样例1:
2.6 2
输出样例1:
10
在一行中输出乘客应支付的车费（单位为元），结果四舍五入，保留到元。
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
