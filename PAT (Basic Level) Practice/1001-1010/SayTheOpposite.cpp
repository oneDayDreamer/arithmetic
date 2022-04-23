/*
1009 说反话 (20 分)
输入样例：
Hello World Here I Come
输出样例：
Come I Here World Hello
*/
#include <iostream>
using namespace std;
#include <stack>
#include <string>
int main(){
       stack<string> v;
      string s;
       while(cin >> s){
           v.push(s);//将输入的每个单词都依次压入栈中
       }
       cout << v.top();
       v.pop();
       while(!v.empty()){//栈不为空就输出栈顶的每一个元素
            cout << " ";
            cout << v.top();
            v.pop();//弹出栈顶元素
       }
  return 0;
}