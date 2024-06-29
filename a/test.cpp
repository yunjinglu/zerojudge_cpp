#include<iostream>
using namespace std;
int main(){
    int t=0,nt=345678;
    while(nt!=0){
        t++;
        nt/=10;
    }
    cout<<t;
}