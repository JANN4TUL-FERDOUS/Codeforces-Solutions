#include <bits/stdc++.h>
using namespace std;
#define ll long long
const int N=1e7+7;
int main() {
	ios::sync_with_stdio(0);
    cin.tie(0);
	int t;
	cin>>t;
	while(t--){
		ll i,n,j,k,s=1,s2=0,z=0;
		cin>>n>>k;
		char a[n][k];
		for(i=0;i<n;i++){
			for(j=0;j<k;j++) cin>>a[i][j];
		}
		if(n==1) {cout<<"1\n";continue;}
		map<ll,ll>m;
		s=0;
		for(i=0;i<k;i++){
			s=1;
			for(j=1;j<n;j++){
				if(m[j]!=0) continue;
				if(a[j][i]!=a[0][i]){m[j]=1;}
				else s++;
			}
		}
		cout<<s<<endl;
		
		
	}
	return 0;	
}