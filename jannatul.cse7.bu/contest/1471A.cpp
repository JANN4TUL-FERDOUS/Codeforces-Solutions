#include<bits/stdc++.h>
using namespace std;
int main(){
    int t;
    cin>>t;
    while(t--){
        int n,i;
        long long x,a,s=0,s1=0;
        cin>>n>>x;
        for(i=0;i<n;i++){
            cin>>a;
            s+=a;
            s1+=(a+(x-1))/x;
        }
        cout<<(s+x-1)/x<<" "<<s1<<endl;
    }
    return 0;
}