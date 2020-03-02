#include <iostream>

using namespace std;

int main()
{
    int m[2][3];
    for(int i=0;i<2;i++)
        for(int j=0;j<3;j++)
          cin>>m[i][j];
    for(int i=0;i<2;i++)
        for(int j=0;j<3;j++)
          cout<<m[i][j]<<endl;

    return 0;
}
