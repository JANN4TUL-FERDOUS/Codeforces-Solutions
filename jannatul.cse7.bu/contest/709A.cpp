#include<iostream>
using namespace std;
int main(){
    long long n,b,d,s1=0,s2=0;
    cin>>n>>b>>d;
    while(n--){
        int a;
        cin>>a;
        if(a<=b) s1+=a;
        if(s1>d){
            s2++;
            s1=0;
        }
    }
    cout<<s2;
    return 0;
}