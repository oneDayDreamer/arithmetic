#include <stdio.h>
#include <math.h>
int main()
{
	int number;

int i,j;
int flag = 0;
for(i =2;i <= 100;i++){
	for(j = 2; j < sqrt(i);j++){
		
		if(i % 2==0){
			flag = 1;
			break;
		}
		
		flag = 0;
	}
	printf("%d  ",i);
} 
		      
	return 0;
}
