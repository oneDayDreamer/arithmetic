#include <stdio.h>
/*
输入样例：
170
输出样例：
5 6
*/
int main()
{
    int cm;
    scanf("%d",&cm);
    
    int foot,inch;
    foot = cm/100.0/0.3048;
    inch = (cm/100.0/0.3048-foot)*12;
    printf("%d %d",foot,inch);
    return 0;
}
