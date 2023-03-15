#include<bits/stdc++.h>
using namespace std;
int main(){
    int t;
    cin>>t;
    while(t--){
        int n,i,s=0,s1=0,s2=0;
        long long k,j=0;
        cin>>n>>k;
        map<int,int>mp;
        long long a[n];
        for(i=0;i<n;i++){
            cin>>a[i];
            mp[a[i]]++;
        }
        if(k==0) cout<<n<<endl;
        else{
            sort(a,a+n);
            s2=a[n-1];
            for(i=0; ;i++){
                if(mp[i]==0){
                    s1=i;
                    break;
                }
            }
            if(s1>s2) cout<<n+k<<endl;
            else{
                if(mp[(s1+s2+1)/2]==0) n++;
                cout<<n<<endl;
            }
        }
    }
    return 0;
}