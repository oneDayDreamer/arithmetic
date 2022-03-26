#include <stdio.h>
/*
7-17 成绩转换 (15 分)
本题要求编写程序将一个百分制成绩转换为五分制成绩。转换规则：

大于等于90分为A；
小于90且大于等于80为B；

小于80且大于等于70为C；

小于70且大于等于60为D；
小于60为E。
*/
int main()
{
    int score;
    scanf("%d",&score);
    
    char level;
    if(score >= 90){
    	level = 'A';
	}else if( score < 90 && score >= 80 ){
		level = 'B';
	}else if(score < 80 && score >= 70){
		level = 'C';
	}else if(score <70 && score >= 60 ){
		level = 'D';
	}else{
		level = 'E';
	}
    
	printf("%c",level);
    
    return 0;
}
