#include<iostream>
using namespace std;
int main(){
    char c;
    cin>>c;
    int num1,num10,sum=0,n;
    if(int(c)==73)n=34;
    else if(int(c)==79)n=35;
    else if(int(c)==87)n=32;
    else if(int(c)==90)n=33;
    else if(int(c)<73)n=int(c)-55;
    else if(int(c)>73&&int(c)<79)n=int(c)-56;
    else if(int(c)>79&&int(c)<87)n=int(c)-57;
    else n=int(c)-58;
    num10=n/10;
    num1=n%10;
    sum+=num1*9+num10;
    char num[8];
    for(int i=0;i<8;i++){
        cin>>num[i];
        sum+=(int(num[i])-48)*(8-i);
    }
    char last;
    cin>>last;
    sum+=int(last)-48;
    cout<<(sum%10==0?"real":"fake");
}