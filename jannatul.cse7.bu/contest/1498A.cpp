#include<iostream>
using namespace std;
long long gcd(long long a){
    long long c=a,b=0;
    while(a!=0){
        b+=a%10;
        a/=10;
    }
    while(b!=0){
        long long x=b;
        b=c%b;
        c=x;
    }
    return c;
}
int main(){
    int t;
    cin>>t;
    while(t--){
        long long a;
        cin>>a;
        while(gcd(a)==1){
            a++;
        }
       cout<<a<<endl;
    }
    return 0;
}