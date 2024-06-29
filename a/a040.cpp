#include<iostream>
#include<cmath>
using namespace std;
bool armstrong(int n){
    int t=0,nt=n;
    while(nt!=0){
        t++;
        nt/=10;
    }
    int sum=0,ns=n;
    for(int j=1;j<=t;j++){
        sum+=pow((ns%10),t);
        ns/=10;
    }
    if(sum==n)return true;
    else return false;
}
int main(){
    int a,b,p=0;
    cin>>a>>b;
    for(int i=a;i<=b;i++){
        if(armstrong(i)){
            cout<<i<<" ";
            p=1;
        }
    }
    if(p==0)cout<<"none";
}