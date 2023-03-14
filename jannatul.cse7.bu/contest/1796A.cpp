#include <bits/stdc++.h>
using namespace std;
const int nn=1e5+7;
#define ll long long 
int main() {
	ios::sync_with_stdio(false);
    cin.tie(NULL);
    int t;
    cin>>t;
    while(t--){
    	int n,i,j,z=0;
    	cin>>n;    	
    	ll s=0,s2=0,s3=0;
    	string a;
    	string b="FBFFBFFBFBFFBFFBFBFFBFFB";
    	cin>>a;
    	i=0;j=0;
    	for(i=0;i<24;i++){
    		int k=i,x=0;
    		for(j=0;j<n;j++){
    			if(b[k]==a[j]){
    				k++;
    				x++;
    			}
    			else break;
    		}
    		if(x==n) {z=1;break;}
    	}
    	if(z==1) cout<<"YES\n";
    	else cout<<"NO\n";
	}
    return 0;
}