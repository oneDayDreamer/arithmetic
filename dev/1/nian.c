//������
#include<stdio.h>
int main()
{
	int x,mask=1,t,d;
	scanf_s("%d",&x);  //x= -33
	if(x<0)
	{
		printf("fu ");
		x=-x;
	}//���x����������
	t=x;        //t=33
	while(t>9)
	{
		t/=10;//  t =3
		mask*=10;  //mask = 10
	}//ʹmask��Ϊ��xλ��һ�µ�10�ı���
	do
	{
		d=x/mask;  
		if(d==1)
			printf("yi");
		else if(d==2)
			printf("er");
		else if(d==3)
			printf("san");
		else if(d==4)
			printf("si");
		else if(d==5)
			printf("wu");
		else if(d==6)
			printf("liu");
		else if(d==7)
			printf("qi");
		else if(d==8)
			printf("ba");
		else if(d==9)
			printf("jiu");
		else
			printf("ling");
		if(mask>9)//�ж��Ƿ�Ϊ���һλ
		{
			printf(" ");
		}
		x%=mask;
		mask/=10;//���������ֽ�
	}
	while(mask>0);
	printf("\n");
	return 0;
}
