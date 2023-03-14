#include<bits/stdc++.h>
using namespace std;
int main(){
    int n,i,s=0;
    string a;
    cin>>n>>a;
    for(i=0;i<n;i++){
        if((a[i]-'0')%2==0) s+=i+1;
    }
    cout<<s<<endl;
    return 0;
}