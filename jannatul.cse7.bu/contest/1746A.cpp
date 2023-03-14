#include <bits/stdc++.h>
using namespace std;

int main() {
	int t;
	cin>>t;
	while(t--){
        int n,i,j,s=0,k,s2;
        cin>>n>>k;
        int a[n],b[n];
        for(i=0;i<n;i++){
            cin>>a[i];
            if(a[i]==1) s=1;
        }
        if(s==1) cout<<"YES\n";
        else cout<<"NO\n";
	}
	return 0;
}