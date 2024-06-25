#include<iostream>
using namespace std;
int main(){
    int n,t=2,x=1;
    cin>>n;
    while(n>1){
        if(n%t==0){
            n/=t;
            while(n%t==0){
                n/=t;
                x++;
            }
            if(x==1){
                cout<<t;
                if(n>1){cout<<" * ";}
            }
            else{
                cout<<t<<"^"<<x;
                if(n>1){cout<<" * ";}
                x=1;
            }
        }
        t++;    
    }
}