#include <iostream>
#include <sstream>
using namespace std;
int main()
{
 stringstream ss;
 int n;
 int il; //�ΨӦs��string �ন int
 while(cin>>n){
    cin.ignore();
    string line;//Ū�J�C����
    for(int i=0;i<n;i++){
        getline(cin,line);
        int sum=0;
        ss.clear();
        //ss<<line;//ss.str(line)//stringstream ss(line);
        ss<<line;
       while(true){
        ss>>il;
        if(ss.fail())break;
        sum+=il; //cout<<il<<endl;
        }
     cout<<sum<<endl;
    }
 }
    return 0;
}
