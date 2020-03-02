#include <iostream>
#include <sstream>

using namespace std;

int main()
{
    stringstream ss;
    string line;
    string s;

    getline(cin ,line);
    ss<<line;
    while(ss>>s){
        cout<<s<<endl;
    }
    return 0;
}
