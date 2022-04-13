#include <stdio.h>
#include <math.h>
/*
7-29 二分法求多项式单根 (20 分)
二分法求函数根的原理为：如果连续函数f(x)在区间[a,b]的两个端点取值异号，
即f(a)f(b)<0，则它在这个区间内至少存在1个根r，即f(r)=0。
*/

int main(){
        float a3 = 0;
        float a2 = 0;
        float a1 = 0;
        float a0 = 0;

        float a ;//区间端点a
        float b ;//区间端点b
        float m;//区间中点m
        float r;
         float f(double x){
       return a3*pow(x,3)+a2*pow(x,2)+a1*x+a0;
       }
       scanf("%f %f %f %f",&a3,&a2,&a1,&a0);
       scanf("%f %f",&a,&b);

       while((b-a) >= 0.01){
         if(f(a)*f(b)<0){
            m = (a+b)/2;
         }
         if(f(m)==0){
           r = (a+b)/2;
           break;
         }

         if(f(a)==0){
          r = a;
           break;
         }
         if(f(b)==0){
          r = b;
          break;
         }


        if(f(m)*f(a)>=0){
            a = m;
        }
        if(f(m)*f(b)>=0){
           b = m;
        }
       }

       if((b-a) < 0.01){
           r  = (a+b)/2; 
       }
       printf("%.2f",r);
      
}
