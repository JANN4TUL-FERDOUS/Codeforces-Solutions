#include<bits/stdc++.h>
using namespace std;
int main(){
    int t;
    cin>>t;
    int l=t;
    while(t--){
        int n,c,s=0,s1=0,s2=0,i,j;
        cin>>n>>c;
        int a[n];
        map<int,int>m;
        for(i=0;i<n;i++){
            cin>>a[i];
            m[a[i]]++;

        }
        for(i=1;i<=100;i++){
            if(m[i]>0) s+=min(m[i],c);
        }
        cout<<min(n,s)<<endl;
    }
    return 0;
}