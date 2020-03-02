#include <iostream>

using namespace std;

int main()
{
    int iv,cnt=0;
    while(cin>>iv){
      for(int i=2;i<=iv;i++){
        while(!(iv%i)){
            cnt+=1;
            iv/=i;
        }
        if(cnt!=0){
            if(cnt>1&&iv>1)
                cout<<i<<"^"<<cnt<<" * ";
            else if(cnt==1&&iv>1)
                cout<<i<<" * ";
            else if(cnt>1&&iv==1)
                cout<<i<<"^"<<cnt<<endl;
            else
                cout<<i<<endl;
            }
           cnt=0;
        }
     }
    return 0;
}
