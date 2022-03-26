#include <stdio.h>
#include <math.h>

int main()
{
	
		int i,j;			
		for(i =2;i <= 100;i++){ //循环遍历到100 
		
			int flag = 1;  //flag用来判断质数 		
		for(j = 2; j < sqrt(i) ;j++){//比较到根号它本身 
		
			if(i % 2==0){//如果能被2整除就说明这个数不是质数 
			flag = 0;  
			 break;
			}
							
		}
		
		  if(flag == 1){ //如果能被flag还是1说明这个数是质数 
		  	printf("%d  ",i);//输出这个数 
		  }	
	} 
	return 0;
}
