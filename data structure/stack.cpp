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
    if(op=="push"){
      cin>>num;
      if(st.size()==size) cout<<"overflow\n";
      else st.push(num);
    }
    else if(op=="pop"){
      cin>>num;
      if(st.empty()) cout<<"underflow\n";
      else{
          num=st.top();
          st.pop();
          cout<<"pop "<<num<<'\n';
      }
    }
    else if(op=="front"){
      if(st.empty()) cout<<"null\n";
      else cout<<"front: "<<st.front()<<'\n';
    }
    else if(op=="empty"){
      if(st.empty()) cout<<"true\n";
      else cout<<"false\n";
    }
    else if(op=="size"){
      cout<<"size: "<<st.size()<<'\n';
    }
    else if(op=="clear"){
      st.clear();
    }
  }
  return 0;
}
