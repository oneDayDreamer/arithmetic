#include <stdio.h>
/*
7-16 计算符号函数的值 (10 分)
输入格式:
输入在一行中给出整数n。

输出格式:
在一行中按照格式“sign(n) = 函数值”输出该整数n对应的函数值。

输入样例1:
10

输出样例1:
sign(10) = 1
*/
int main()
{
int n;
scanf("%d",&n);

if(n>0){
    printf("sign(%d) = 1",n);
}else if(n==0){
    printf("sign(%d) = 0",n);
}else{
    printf("sign(%d) = -1",n);
}

return 0;
}
