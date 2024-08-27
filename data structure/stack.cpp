#include<bits/stdc++.h>
using namespace std;
stack<int> st;//一个栈
int n,num,size=0;
//n:操作个数
//num:参数
//size:栈大小
string op;//op:操作
int main(){
  cin>>n;
  for(int i=1;i<=n;i++){
    cin>>op;
    if(op=="push"){//入栈
      cin>>num;
      if(st.size()==size) cout<<"Error:Stack is overflow.\n";//上溢处理
      else st.push(num);
    }
    else if(op=="pop"){//出栈
      cin>>num;
      if(st.empty()) cout<<"Error:Stack is underflow.\n";//下溢
      else{
          num=st.top();
          st.pop();
          cout<<"pop "<<num<<'\n';//输出出栈元素
      }
    }
    else if(op=="top"){//栈顶元素
      if(st.empty()) cout<<"Error:Stack is empty.\n";//空栈
      else cout<<"top: "<<st.top()<<'\n';
    }
    else if(op=="empty"){//判断是否是空栈
      if(st.empty()) cout<<"True\n";//真
      else cout<<"False\n";//假
    }
    else if(op=="size"){//栈内元素个数
      cout<<"size: "<<st.size()<<'\n';
    }
    else if(op=="clear"){//清空栈
      st.clear();
      //while(st.size()) st.pop() //循环出栈
    }
  }
  return 0;
}
/*
当有错误输入如：
栈内元素数量超过栈容量仍然push
栈为空时pop,top
...
输出错误信息后不执行该操作
*/
