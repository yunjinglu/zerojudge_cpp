#include <iostream>
#include <string>
using namespace std;
string keyboard = "`1234567890-=qwertyuiop[]\\asdfghjkl;'zxcvbnm,./";
int main(){
    char n;
    while(cin.get(n)){
        if(n == ' ' || n == '\n'){
            cout<<n;
            continue;
        }
        for(int i=0;i<keyboard.size();i++){
            if(keyboard[i]==n){
                cout<<keyboard[i-2];
                break;
            }
        }
    }
}