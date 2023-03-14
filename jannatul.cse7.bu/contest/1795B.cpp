#include <bits/stdc++.h>
using namespace std;
int main() {
	ios::sync_with_stdio(false);
    cin.tie(NULL);
    int t;
	cin>>t;
	while(t--){
	    int n,k,s=0,s2=0,s3=0,i,j;
	    cin>>n>>k;
	    while(n--){
	    	int a,b;
	    	cin>>a>>b;
	    	if(k>=a && k<=b) {	    		
	    		s++;
	    		if(k-1>=a && k-1<=b) s2++;
	    		if(k+1>=a && k+1<=b) s3++;
    		}
	    }
	    if(s>s2 && s>s3) cout<<"YES\n";
	    else cout<<"NO\n";
	}
	return 0;
}