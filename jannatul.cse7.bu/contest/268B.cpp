#include<iostream>
using namespace std;
int main(){
    int n,s;
    cin>>n;
    s=n;
    for(int i=1;i<n;i++) s+=(n-i)*i;
    cout<<s;
    return 0;
}