#include <stdio.h>
#include <math.h>

int main()
{
	
		int i,j;			
		for(i =2;i <= 100;i++){ //ѭ��������100 
		
			int flag = 1;  //flag�����ж����� 		
		for(j = 2; j < sqrt(i) ;j++){//�Ƚϵ����������� 
		
			if(i % 2==0){//����ܱ�2������˵��������������� 
			flag = 0;  
			 break;
			}
							
		}
		
		  if(flag == 1){ //����ܱ�flag����1˵������������� 
		  	printf("%d  ",i);//�������� 
		  }	
	} 
	return 0;
}
