#include<iostream>
using namespace std;
int main(){
    string s;
    cin>>s;
    int len=s.size();
    char n[len];
    for(int i=len-1;i>=0;i--){
        n[i]=s[len-i-1];
    }
    bool b=1;
    for(int i=0;i<len;i++){
        if(n[i]!=s[i]){
            b=0;
            break;
        }
    }
    cout<<(b?"yes":"no");
}