#include<bits/stdc++.h>
using namespace std;
int main(){
    int t,n,i;
    cin>>t;
    while(t--){
        cin>>n;
        int a[n],s=0;
        for(i=0;i<n;i++) cin>>a[i];
        sort(a,a+n);
        if(a[0]==a[n-1]) cout<<n<<endl;
        else cout<<"1\n";
    }
    return 0;
}