#include <stdio.h>
/*
7-15 BCD���� (10 ��)
BCD������һ���ֽ���������λʮ���Ƶ�����ÿ�ĸ����ر�ʾһλ��
�������һ��BCD����ʮ��������0x12��������ľ���ʮ���Ƶ�12��
����С��ûѧ��BCD�������е�BCD����������������ת����ʮ��������ˡ�����BCD��0x12���������ʮ���Ƶ�18�ˣ�
���ڣ���ĳ���Ҫ������������ʮ��������Ȼ�������ȷ��ʮ����������ʾ������԰�18ת����0x12��Ȼ����ת����12��
�����ʽ��
������һ���и���һ��[0, 153]��Χ�ڵ�����������֤��ת������Ч��BCD����Ҳ����˵�������ת����ʮ������ʱ�������A-F�����֡�
�����ʽ��
�����Ӧ��ʮ��������

����������
18

���������
12
*/
int main()
{
	int a;
	scanf("%d",&a);
	int b = a%16;
	int c = a/16*10+b;
	printf("%d",c);
	return 0;
}