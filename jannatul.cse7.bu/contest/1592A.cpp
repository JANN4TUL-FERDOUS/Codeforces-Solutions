#include<bits/stdc++.h>
using namespace std;
vector<int>v;
int main(){
    int t,l;
    cin>>t;
    while(t--){
        v.clear();
        long long s=0,s1=0,s2=0,s3=0,n,i,h,a,x;
        cin>>n>>h;
        while(n--){
            cin>>a;
            v.push_back(a);
        }
        sort(v.begin(),v.end());
        int l=v.size();
        s1=v[l-1];s2=v[l-2];
        s=h/(s1+s2);
        s3=s*2;
        if(h%(s1+s2)>0){
            x=h%(s1+s2);
            s3++;
            if(x>s1) s3++;
        }
        cout<<s3<<endl;
    }
    return 0;
}