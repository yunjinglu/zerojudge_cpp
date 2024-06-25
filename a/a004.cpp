#include<iostream>
using namespace std;
int main(){
    int y;
    while(cin>>y){
        bool b=0;
        if(y%4==0){
            if(y<100){
                b=1;
            }
            else{
                if(y%100!=0){
                    b=1;
                }
            }
        }
        if(y%400==0){
            b=1;
        }
        cout<<(b?"閏年":"平年")<<endl;
    }
}