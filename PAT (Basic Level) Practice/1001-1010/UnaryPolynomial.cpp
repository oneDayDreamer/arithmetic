/*
1010 一元多项式求导 (25 分)
输入样例:
3 4 -5 2 6 1 -2 0      
输出样例:               
12 3 -10 1 6 0
*/
#include <iostream>                  //注意
using namespace std;                //1.当z是0不输出
                                    //2.当x，z都为0，输出  “0 0”
int mian(){                         //3.指数递降，z会越来越小
        int x,z;//x：系数  z：指数

         bool flag = true;
        while(cin >> x >> z){
             if(z!=0){
                 if(flag==false){
                   cout << " ";
                 }
             cout << x*z << " " << z-1;
               flag = false;
             }
        }
        if(flag==true){ 
            cout << "0 0";
        }
    return 0;
}