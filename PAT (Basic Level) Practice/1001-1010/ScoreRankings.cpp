/*
1004 成绩排名 (20 分)
3                    读入 n（>0）名学生的姓名、学号、成绩，分别输出成绩最高和成绩最低学生的姓名和学号。
Joe Math990112 89    其中姓名和学号均为不超过 10 个字符的字符串
Mike CS991301 100     成绩为 0 到 100 之间的一个整数
Mary EE990830  95      这里保证在一组测试用例中没有两个学生的成绩是相同的。

输出样例：
Mike CS991301
Joe Math990112
*/
#include <iostream>
using namespace std;
#include <string>
struct Student{
       string name;//学生姓名
       string id;//学生学号
       int score;//学生成绩
};
int main(){

        std::ios::sync_with_stdio(false);//关闭同步，提高cin cout速度
        int n;cin >> n;

        int max = -1;int min = 101;
        int flagBig;    //判断最高分的数组
        int flagSmall;  //判断最低分数组

        struct Student std[1000];
       for(int i=0;i<n;i++){
           cin >> std[i].name >> std[i].id >> std[i].score;
            if(max < std[i].score){
                  max = std[i].score;
                  flagBig = i;
               }
            if(min > std[i].score){
                  min = std[i].score;
                  flagSmall = i;
            }
       }
              cout << std[flagBig].name << " " << std[flagBig].id << endl;
              cout << std[flagSmall].name << " " << std[flagSmall].id << endl;
              
     return 0;
}