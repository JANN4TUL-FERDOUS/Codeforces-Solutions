#include<bits/stdc++.h>
using namespace std;
int main(){
    int t;
    cin>>t;
    while(t--){
        vector<char>v;
        char c,d,x;
        int i,s=0,j,n;
        cin>>n;
        string a[n],b;
        for(i=0;i<n-2;i++){
           cin>>c>>d;
           if(i==0 || x!=c) v.push_back(c);
           v.push_back(d);
           x=d;
        }

        for(i=0;i<v.size();i++) cout<<v[i];
        int l=n-v.size();
        while(l--) cout<<x;
        cout<<endl;
    }
    return 0;

}