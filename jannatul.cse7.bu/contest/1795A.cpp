#include <bits/stdc++.h>
using namespace std;

int main() {
	ios::sync_with_stdio(false);
    cin.tie(NULL);
    int t;
	cin>>t;
	while(t--){
	    int n,m,s=0,i,j,z=0,l=-1,l2=-1;
	    cin>>n>>m;
	    string a,b;
	    cin>>a>>b;
	    for(i=1;i<n;i++){
	    	if(a[i]==a[i-1]){
	    		s++;
    		}
	    }
	    for(i=1;i<m;i++){
	    	if(b[i]==b[i-1]){
	    		s++;
    		}
	    }
	    if(s==1 && a[n-1]==b[m-1]) s++;
	    if(s>=2) cout<<"NO\n";
	    else cout<<"YES\n";
	}
	return 0;
}