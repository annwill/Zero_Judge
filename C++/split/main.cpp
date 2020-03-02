#include <iostream>
#include <sstream>
#include <string>
using namespace std;

int main()
{
    int n;
    //stringstream ss;
    string line;
    string input;
    string xx;
    cin>>n;
    cin.ignore();
    for(int i=0;i<n;i++){
       //ss.clear();
       getline(cin,line);
       cout<<line<<endl;
      // ss<<line;
       stringstream ss(line);
       while(getline(ss,xx,' ')){
         cout<<xx<<endl;
       }
       ss.clear();
     }
    return 0;
}
