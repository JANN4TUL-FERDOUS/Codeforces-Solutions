#include<iostream>
using namespace std;
int res(int a){
    int s=0;
    while(a!=0){
        s+=a%10;
        a/=10;
    }
    return s;
}
int main(){
    int n,s=0;
    cin>>n;
    s=res(n);
    while(s%4!=0){
        n++;
        s=res(n);
    }
    cout<<n;
    return 0;
}