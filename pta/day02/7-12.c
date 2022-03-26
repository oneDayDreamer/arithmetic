#include <stdio.h>
/*
输入格式：
输入在一行中按照“mm-dd-yyyy”的格式给出月、日、年。题目保证给出的日期是1900年元旦至今合法的日期。

输出格式：
在一行中按照“yyyy-mm-dd”的格式给出年、月、日。

输入样例：
03-15-2017
输出样例：
2017-03-15
*/
int main(){
    int year;
    int month;
    int day;
    scanf("%d-%d-%d",&month,&day,&year);
    
    printf("%d-%.2d-%.2d",year,month,day);
    return 0;
}
