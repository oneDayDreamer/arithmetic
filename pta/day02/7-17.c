#include <stdio.h>
/*
7-17 �ɼ�ת�� (15 ��)
����Ҫ���д����һ���ٷ��Ƴɼ�ת��Ϊ����Ƴɼ���ת������

���ڵ���90��ΪA��
С��90�Ҵ��ڵ���80ΪB��

С��80�Ҵ��ڵ���70ΪC��

С��70�Ҵ��ڵ���60ΪD��
С��60ΪE��
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
