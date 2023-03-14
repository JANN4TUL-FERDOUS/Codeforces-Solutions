#include<iostream>
using namespace std;
int main(){
    long long n,s1,s2=0;
    cin>>n;
    if((n%10)%2!=0) s2=1;
    n/=2;
    if((n%10)%2!=0) s2++;
    if(s2%2==0) cout<<"0\n";
    else cout<<"1\n";
    return 0;
}