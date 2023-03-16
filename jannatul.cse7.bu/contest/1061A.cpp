#include<iostream>
using namespace std;
int main(){
    long long n,s,x;
    cin>>n>>s;
    x=s/n;
    if(s%n!=0) x++;
    cout<<x<<endl;
    return 0;
}