#include <stdio.h>

int main()
{
	int ranNumber;
	int guess;
	scanf("%d %d",&ranNumber,&guess);//输入一个要猜测的数，和猜测最大次数 
	
	
	int count = 0;
	 int number;
   while(1){
   	 count++;//记录猜测的次数 
   	   scanf("%d",&number);
   	 if(( count > guess)  ||( number < 0 ) ){
   	 	  printf("Game Over\n");
   	 	  return 0;
		}
		
		if(number > ranNumber){
			printf("Too big\n");
		}
		if(number < ranNumber){
			printf("Too small\n");
		}
		
		if(number == ranNumber){
			if(count == 1){
				printf("Bingo!\n");
				break;
			}else if(count <= 3){
				printf("Lucky You!\n");
				break;
			}else{
				printf("Good Guess!\n");
				break;
			}
		}
	
   	    
   }
	
	return 0;
}//main
