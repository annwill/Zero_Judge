#include <iostream>
#include <sstream>
#include <stack>

using namespace std;

stringstream ss;
int priority(char op);
string infixToPofix(string infix);
stack<char> stk;

int main()
{
    string input;
    while(getline(cin,input)){
        string pofix=infixToPofix(input);
        cout<<pofix<<endl;
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
   string output;
   ss.clear();
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
                        output+=stk.top(); output+=" ";
                        stk.pop();
                    }
                    stk.push(x[0]);
                    break;
                case ')':
                    while(stk.top()!='('){
                        output+=stk.top();output+=" ";
                        stk.pop();
                    }
                    stk.pop();
                    break;
                default:
                    output+=x;output+=" ";
                    break;
                 }
//            }
        }
       while(!stk.empty()){
           output+=stk.top();output+=" ";
           stk.pop();
        }
       return output;
}
