#include<iostream>
using namespace std;
int main(){
    int a,b,c;
    cin>>a>>b>>c;
    b=b-a-1;
    c=c-a-2;
    if(b<c && b<0) a+=b;
    if(b==c && b<0) a+=b;
    else if(c<b && c<0) a+=c;
    cout<<a*3+3<<endl;
    return 0;
}