#include<iostream>
using namespace std;
int main(){
    int t,num[4];
    cin>>t;
    while(t--){
        for(int i=0;i<4;i++){
            cin>>num[i];
        }
        int d=num[1]-num[0],r;
        if(num[1]%num[0]==0){
            r=num[1]/num[0];
        }
        if(num[2]-num[1]==d){
            for(int i=0;i<4;i++){
                cout<<num[i]<<" ";
            }
            cout<<num[3]+d<<endl;
        }
        else{
            for(int i=0;i<4;i++){
                cout<<num[i]<<" ";
            }
            cout<<num[3]*r<<endl;
        }
    }
}