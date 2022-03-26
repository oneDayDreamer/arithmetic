#include <stdio.h>

int main()
{
    int number1;
    int odd = 0; 
    int even = 0;
  
  	 scanf("%d",&number1);
while(number1!=-1){

   	  if(number1%2==0){
   	  	  even++;
		 }
   	  else{
   	  	  odd++;
		 }
		 scanf("%d",&number1);
}
    printf("%d %d",odd,even);
    return 0;
}

