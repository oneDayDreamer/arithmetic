#include <stdio.h>
/*
当小时为个位数时，没有前导的零，
注意，第二个数字表示的分钟数可能超过 60，也可能是负数
输入样例：
1120 110

输出样例：
1310

*/
int main()
{
   int t,t2;
    scanf("%d %d",&t,&t2);
    int hour;
    int minute;
    int time;
    time = (t/100*60)+(t%100)+t2;//790
    hour = time/60;//13
    minute = time%60;//10
    
    printf("%.3d",(hour*100)+minute);
    
    return 0;
}
