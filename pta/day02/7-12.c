#include <stdio.h>
/*
�����ʽ��
������һ���а��ա�mm-dd-yyyy���ĸ�ʽ�����¡��ա��ꡣ��Ŀ��֤������������1900��Ԫ������Ϸ������ڡ�

�����ʽ��
��һ���а��ա�yyyy-mm-dd���ĸ�ʽ�����ꡢ�¡��ա�

����������
03-15-2017
���������
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
