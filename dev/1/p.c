#include <stdio.h>

int main(){
	int n,m;
	scanf("%d %d",&n,&m);
	
	
	int count = 0;//��¼�ڼ�������
	int sum = 0;//ͳ�������ĺ�

	
	int i,j;
	for(i = 2;count< m;i++){
			int flag = 1;//�ж�������1Ϊ������0���� 
		for(j = 2;j < i;j++){
			if(i%j==0){
				flag = 0;
				break;
			}
		}
		  if(flag==1){
		  	 count++;
		  	  if(count >= n){
	    	sum += i;
		      }
		  }
	}
	  printf("%d",sum);
	    
}
