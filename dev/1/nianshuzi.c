#include <stdio.h>
/*
输入样例：

-30

输出样例：

fu san ling
*/
int main()
{
	 int x;
	 scanf("%d",&x);//-30
	 
	 if(x < 0){
	 	printf("fu ");
	 	x = -x;
	 }
	 
	 int t;
	 t = x;//t=30
	 
	 int mask = 1;
	 while(t > 9){
	 	t/=10;   //t=3
	 	mask *= 10;   
	 }
	 
	 int d;
	 do{
	   d =	x/mask; //d=3
	   
	   
	   
	   switch(d){
	   	case 0:
	   	    	printf("ling");
	   	    	break;
	    case 1:
	   	    	printf("yi");
	   	    	break;
	   	case 2:
	   	    	printf("er");
	   	    	break;
	   	case 3:
	   	    	printf("san");
	   	    	    	break;
	   	
	   	case 4:
	   	    	printf("si");
	   	    	    	break;
	   	
	   	case 5:
	   	    	printf("wu");
	   	    	    	break;
	   	
	   	case 6:
	   	    	printf("liu");
	   	    	    	break;
	   	
	   	case 7:
	   	    	printf("qi");
	   	    	    	break;
	   	
	   case 8:
	   	    	printf("ba");
	   	    	    	break;
	   	
	   case 9:
	   	    	printf("jiu");
	   	    	    	break;
	   	
	   	    }
	   
	     if(mask > 9){
	     	 printf(" ");
		 }
		 x%=mask;
	 	mask /= 10;
	 }while(mask > 0);
	 
	 
	return 0;
}
