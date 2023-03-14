#include <bits/stdc++.h>
using namespace std;
int x[27][100005];

int main() {
    int t;
    cin>>t;
    while(t--){
    	long long n,i,j,s=0;
    	cin>>n;
    	map<string,int>m;
    	map<string ,int>m2;
    	string a;
    	cin>>a;
    	for(i=1;i<n;i++){
    		string b;
    		b+=a[i-1];
    		b+=a[i];
    		m[b]++;
    		if(m[b]>2 || (m[b]==2 && m2[b]!=i-1)) {
    			//cout<<m2[b]<<" "<<i<<" ";
    			s=1;
    			break;
    		}
    		m2[b]=i;
    	}
    	if(s==1) cout<<"YES\n";
    	else cout<<"NO\n";
    	
	}
    return 0;
}