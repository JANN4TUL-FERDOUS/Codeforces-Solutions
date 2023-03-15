#include<bits/stdc++.h>
using namespace std;
int main(){
    int t;
    cin>>t;
    while(t--){
        int n,k,i,s=1,x;
        vector<pair<int,int> >v;
        cin>>n>>k;
        for(i=0;i<n;i++){
            cin>>x;
            v.push_back({x,i});
        }
        sort(v.begin(),v.end());
        for(i=1;i<n;i++){
            if(abs(v[i].second-v[i-1].second!=1)) s++;
        }
        //cout<<s<<" ";
        if(s>k) cout<<"NO\n";
        else cout<<"YES\n";
    }
    return 0;
}