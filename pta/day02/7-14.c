#include <stdio.h>
/*
��СʱΪ��λ��ʱ��û��ǰ�����㣬
ע�⣬�ڶ������ֱ�ʾ�ķ��������ܳ��� 60��Ҳ�����Ǹ���
����������
1120 110

���������
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
