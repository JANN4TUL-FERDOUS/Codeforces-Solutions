#include <bits/stdc++.h>
using namespace std;
int x[27][100005];

int main() {
    int t;
    cin>>t;
    while(t--){
    	int i,j,s=0;
    	long long n,k;
    	int m;
    	cin>>n>>m>>k;
    	long long a[m];
    	long long s2,s3;
    	s2=n/k;
    	s3=n%k;
    	if(k>m) s=1;
    	for(i=0;i<m;i++){
    		cin>>a[i];
    		if(a[i]-1>s2)s=1;
    		else{
    			if(a[i]==s2+1){
    				s3--;
    				if(s3<0) s=1;
    			}
    		}
    	}
    	if(s==1) cout<<"NO\n";
    	else cout<<"YES\n";
    	
	}
    return 0;
}