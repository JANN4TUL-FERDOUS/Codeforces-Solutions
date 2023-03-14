#include<bits/stdc++.h>
using namespace std;
#define ll long long
int main(){
	ios::sync_with_stdio(false);
    cin.tie(NULL);
    int t;
    cin>>t;
    while(t--){
    	int n,i,j;
    	int s=0,s2=0,z=0,s3=0;
    	cin>>n;
    	int l=2*n-2;    	
    	string a,b,c;
    	for(i=0;i<l;i++){
    		cin>>a;
    		if(a.length()==n-1){
    			if(s==0) {s=1;b+=a;}
    			else c+=a;
    		}
    	}
    	//cout<<c<<" "<<b<<endl;
    	for(i=0;i<n-1;i++){
    		if(b[i]!=c[n-2-i]){z=1;break;}
    	}
    	if(z==0) cout<<"YES\n";
    	else cout<<"NO\n";
	}
	return 0;
}