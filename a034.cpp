#include<iostream>
#include<list>
using namespace std;
int main(){
    int n;
    while(cin>>n){
        list<int> num;
        while(n!=0){
            num.push_front(n%2);
            n/=2;
        }
        while(!num.empty()){
            cout<<num.front();
            num.pop_front();
        }
        cout<<endl;
    }
}