#include<bits/stdc++.h>
using namespace std;
long long a[1000005];
int main(){
    int t;
    cin>>t;
    while(t--){
        long long i,n,s=0;
        cin>>n;
        vector<long long>v;
        for(i=0;i<n;i++){
            cin>>a[i];
            if(a[i]<i+1){
                s+=lower_bound(v.begin(),v.end(),a[i])-v.begin();
                v.push_back(i+1);
            }
        }
        cout<<s<<endl;
    }
    return 0;
}