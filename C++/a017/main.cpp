#include <iostream>
#include <sstream>
#include <stack>
using namespace std;

stringstream ss;
int priority(char op);
string infixToPofix(string infix);
int calc(string pofix);
stack<char> stk;
stack<int> ntk;

int main()
{
    string input;
    while(getline(cin,input)){
        string pofix=infixToPofix(input);
        cout<<pofix<<endl;
        cout<<calc(pofix)<<endl;
       }
   // return 0;
}
int priority(char op){
    switch(op){
        case '(':
            return 1;
            break;
        case '+':
        case '-':
            return 2;
            break;
        case '*':case '/':
            return 3;
            break;
        case '%':
            return 4;
            break;
        default:
            return 0;
    }
}
string infixToPofix(string infix){
   string x;
   while(!stk.empty())stk.pop();
   stk.push(-1);
   ostringstream pofix;
   ss.clear();//Important
   ss<<infix;
   while(ss>>x){
 //      if (isdigit(x[0])){
 //           pofix<<x<<" ";
 //      }else{
            switch (x[0]){
                case '(':
                    stk.push(x[0]);
                    break;
                case '+' :case '-': case '*' :case '/' :case '%' :
                    if(priority(stk.top())>=priority(x[0])){
                        pofix<<stk.top()<<" ";
                        stk.pop();
                    }
                    stk.push(x[0]);
                    break;
                case ')':
                    while(stk.top()!='('){
                        pofix<<stk.top()<<" ";
                        stk.pop();
                    }
                    stk.pop();
                    break;
                default:
                    pofix<<x<<" ";
                    break;
                 }
//            }
        }
       while(!stk.empty()){
           pofix<<stk.top()<<" ";
           stk.pop();
        }
       return pofix.str();
}

int calc(string pofix){
   string s;
   int a,b;
   istringstream read(pofix);
   while(read>>s){
      switch(s){
         case '+':
            a=ntk.top();
            ntk.pop();
            b=ntk.top();
            ntk.pop();
            ntk.push(a+b);
            //cout<<ntk.top()<<endl;
            break;
        case '-':
            a=ntk.top();
            ntk.pop();
            b=ntk.top();
            ntk.pop();
            ntk.push(a-b);
           // cout<<ntk.top()<<endl;
        case '*':
            a=ntk.top();
            ntk.pop();
            b=ntk.top();
            ntk.pop();
            ntk.push(a*b);
           // cout<<ntk.top()<<endl;
        case '/':
            a=ntk.top();
            ntk.pop();
            b=ntk.top();
            ntk.pop();
            ntk.push(b/a);
            //cout<<ntk.top()<<endl;
        default:
            ntk.push(s);
            cout<<ntk.top()<<endl;
      }

   }
    return ntk.top();
}
