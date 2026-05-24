#include <iostream>
#include <algorithm>
using namespace std;
int main(){
    int n;
    while(cin>>n){
        
        int s[n];
        for(int i=0;i<n;i++){
            cin>>s[i];
        }
        if(n==1){
            cout<<"Jolly"<<endl;
            continue;
        }
        int d[n-1];
        for(int i=0;i<n-1;i++){
            d[i]=abs(s[i]-s[i+1]);
        }

        sort(d, d+n-1);

        int i=1;
        while(i!=n){
            if(d[i-1]!=i){
                cout<<"Not jolly"<<endl;
                break;
            }
            i++;
        }
        if(i==n){
            cout<<"Jolly"<<endl;
        }
    }
}