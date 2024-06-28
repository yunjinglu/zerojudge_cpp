#include<iostream>
using namespace std;
int main(){
    int r,c;
    while(cin>>r>>c){
        int num[r][c];
        for(int i=0;i<r;i++){
            for(int j=0;j<c;j++){
                cin>>num[i][j];
            } 
        }
        for(int i=0;i<c;i++){
            for(int j=0;j<r;j++){
                cout<<num[j][i]<<" ";
            }
            cout<<endl;
        }
    }
}