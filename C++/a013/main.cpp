#include <iostream>


using namespace std;

int roman_To_decm(string s){
   int result=0;
   for(int i=0;i<s.length();i++)
   {
     switch(s[i]){
       case "I":

     }
   }
}
int main()
{
    string num1,num2;
    while(cin>>num1){
        if(num1!="#"){
            cout<<roman_To_decm(num1);
        }
    }
    return 0;
}
