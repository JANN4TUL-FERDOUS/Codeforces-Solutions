#include<bits/stdc++.h>
using namespace std;
const int m=1e5+10;
int t,n,x,i,s,a[m];
int main(){
    cin>>t;
    while(t--){
        map<int,int>mp;
        cin>>n>>x;
        int a[n];
        for(i=0;i<n;i++){
            cin>>a[i];
            mp[a[i]]++;
        }
        for(i=1;;i++){
            if(!mp[i])x--;
            if(x<0) break;
        }
        cout<<i-1<<endl;
    }
    return 0;
}