#include <stdio.h>

int main(){
	int n,m;
	scanf("%d %d",&n,&m);
	
	
	int count = 0;//记录第几个素数
	int sum = 0;//统计素数的和

	
	int i,j;
	for(i = 2;count< m;i++){
			int flag = 1;//判断质数，1为质数，0不是 
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
