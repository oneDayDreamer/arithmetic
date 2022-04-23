#include <iostream>
#include <string>
#include <map>
using namespace std;
int main()
{
       int n;cin >> n;//n表示需要检测的字符串个数
       while(n--){
         string s; cin >> s;
         map<char,int> m;//记录P,A,T三种字符的数量
          int p=0;
          int t=0;
         for(int j=0;j<s.size();j++){
              m[s[j]]++;
            if(s[j] == 'P')  p = j;//p记录P的位置
            if(s[j] == 'T')  t = j;//t记录T的位置
         }
           //1.要有P和T
           //2.A的数量不能为0
           //3.P和T中间必须有一个A
           //4.m长度等于3
           //5.前A的数量 * 中A的数量 == 后A的数量
      if(m['P'] == 1 && m['T'] == 1 && m['A'] != 0 && (t-p-1) >= 1 && m.size()==3 && p*(t-p-1)==(s.size()-t-1)){
             cout << "YES" << endl;
         }else{
             cout <<  "NO" << endl;      
         }
       }
    return 0;
}