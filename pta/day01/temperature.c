#include <stdio.h>
/*
给定一个华氏温度F，本题要求编写程序，计算对应的摄氏温度C。
计算公式：C=5×(F?32)/9。题目保证输入与输出均在整型范围内。
*/
int main()
{
    int f;
    scanf("%d",&f);
    int c = 5*(f-32)/9;
        printf("Celsius = %d",c);
    return 0;
}
