#include<iostream>
using namespace std;

int problem(int i,int count){
    count+=1;
    if(i==1) return count;
    if(i%2==1) return problem(3*i+1,count);
    else return problem(i/2,count);
}
int main(){
    int n;
    while(cin>>n){
        int m,max=0;
        cin>>m;
        cout<<n<<" "<<m<<" ";
        if(n>m) swap(n,m);
        for(int i=n;i<=m;i++){
            int count=0;
            count = problem(i,count);
            if(count>max) max=count;
        }
        cout<<max<<endl;
    }
}