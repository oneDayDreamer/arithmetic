#include <stdio.h>
/*
7-16 ������ź�����ֵ (10 ��)
�����ʽ:
������һ���и�������n��

�����ʽ:
��һ���а��ո�ʽ��sign(n) = ����ֵ�����������n��Ӧ�ĺ���ֵ��

��������1:
10

�������1:
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
