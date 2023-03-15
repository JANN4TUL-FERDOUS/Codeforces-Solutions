#include<bits/stdc++.h>
using namespace std;
int main(){
    int t;
    cin>>t;
    while(t--){
        int n,i,s=0;
        cin>>n;
        int a[n];
        for(i=0;i<n;i++) cin>>a[i];
        n--;
        while(n>0 && a[n]<=a[n-1]) n--;
        while(n>0 && a[n]>=a[n-1]) n--;
        cout<<n<<endl;
    }
    return 0;
}