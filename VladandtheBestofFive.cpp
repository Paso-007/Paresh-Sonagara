#include <bits/stdc++.h>
using namespace std;
int main()
{
    int t;
    cin>>t;
    while(t--){
        string str;
        cin>>str;
        int count=0;
        for(int i=0;i<5;i++){
            if(str[i]=='A'){
                count++;
            }
        }

        if(count>=3){
            cout<<"A"<<endl;
        }
        else{
            cout<<"B"<<endl;
        }
    }
return 0;
}