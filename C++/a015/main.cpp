#include <iostream>
using namespace std;
int main()
{
    int a,b;
    while(cin>>a>>b){
        int m[a][b];
        for(int i=0;i<a;i++)
            for(int j=0;j<b;j++)
                cin>>m[i][j];
        for(int i=0;i<b;i++){
             cout<<endl;
            for(int j=0;j<a;j++)
                 cout<<m[j][i]<<" ";
        }
    }
    return 0;
}
