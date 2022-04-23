/*
1002 写出这个数 (20 分)
读入一个正整数 n，计算其各位数字之和，用汉语拼音写出和的每一位数字。
输入格式：
每个测试输入包含 1 个测试用例，即给出自然数 n 的值。这里保证 n 小于 10 的100次方
输出格式：
在一行内输出 n 的各位数字之和的每一位，拼音数字间有 1 空格，但一行中最后一个拼音数字后没有空格。

输入样例：
1234567890987654321123456789
输出样例：
yi san wu   
*/
#include <iostream>
using namespace std;
#include <string>

int main(){
      string s;cin >> s;            //核心思想：字符串 -> 数字 -> 字符串  -> 数字 
      int sum = 0;
      for(int i=0;i<s.size();i++){
           sum += s[i]-'0';          //把数字和累加到sum中
      }
      string num = to_string(sum);  //把数字转为字符串类型的
       string str[10] = {"ling","yi","er","san","si","wu","liu","qi","ba","jiu"};

       for(int i=0;i<num.size();i++){
           if(i!=0){
            cout << " ";
           }
          cout << str[num[i]-'0'];   //依次输出str数组中的元素
       }
    return 0;
}