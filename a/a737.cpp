#include <iostream>
using namespace std;

int main() {
    int n;
    cin>>n;
    int r;
    while(n){
        cin>>r;
        int s[r],d=0;
        for(int i=0;i<r;i++){
            cin>>s[i];
        }
        for(int i=0;i<r;i++){
            for(int j=i+1;j<r;j++){
                if(s[i]>s[j]){
                    int num = s[j];
                    s[j]=s[i];
                    s[i]=num;
                }
            }
        }

        int m=r/2;
        for(int i=0;i<r;i++){
            d+=abs(s[i]-s[m]);
        }
        cout<<d<<endl;
        n--;
    }

    return 0;
}
