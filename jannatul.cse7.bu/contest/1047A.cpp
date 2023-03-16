#include<bits/stdc++.h>
using namespace std;
int main(){
    int n;
    cin>>n;
    int s=n%3;
    if(s==0 || s==1) cout<<"1 1 "<<n-2;
    else if(s==2) cout<<"1 2 "<<n-3;
    return 0;
}