#include<iostream>
using namespace std;
int main(){
    long long a,b,x=1;
    cin>>a>>b;
    a=min(a,b);
    for(int i=1;i<=a;i++){
        x*=i;
    }
    cout<<x<<endl;
    return 0;
}