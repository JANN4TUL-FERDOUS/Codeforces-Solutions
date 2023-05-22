#include <bits/stdc++.h>
using namespace std;
#define ll long long
#define ff first
#define ss second
const int N=3e5+7;
int main() {
	ios::sync_with_stdio(0);
    cin.tie(0);
	int t;
	cin>>t;
	while(t--){
		ll n,i,j,s=0,k,s2=0;
		map<string,ll>mp;
		cin>>n;
		ll a[n+1],b[n+1],c[n+1];
		a[0]=0;b[0]=0;
		for(i=1;i<=n;i++){
			cin>>a[i];
			b[a[i]]=i;
		}
		if(n==1) {cout<<"1\n";continue;}
		ll r;
		if(b[n]!=1) r=n;
		else r=n-1;
		cout<<r<<" ";
		for(i=b[r]+1;i<=n;i++) cout<<a[i]<<" ";
		i=b[r]-1;
		if(i<n-1) cout<<a[i--]<<" ";
		for(;i>0;i--){
			if(a[i]>a[1]) cout<<a[i]<<" ";
			else{
				for(j=1;j<=i;j++) cout<<a[j]<<" ";
				break;
			}
		}
		/*if(a[1]==n){
			for(i=b[r]+1;i<=n;i++) cout<<a[i]<<" ";
			if(b[r]!=n) {cout<<a[b[r]-1]<<" ";j=b[r]-1;}
			else j=b[r];
			for(i=1;i<j;i++) cout<<a[i]<<" ";
			cout<<endl;
			continue;
		}
		if(b[r]!=n && a[b[r]+1]>max(a[0],a[b[r]-1])){
			s=1;
			for(i=b[r]+1;i<=n;i++) cout<<a[i]<<" ";
			j=1;
			cout<<a[b[r]-1]<<" ";
			for(i=b[r]-2;i>0;i--){
				if(a[i]>a[j]) cout<<a[i]<<" ";
				else{
					for(ll k=j;k<=i;k++) cout<<a[k]<<" ";
					break;
				}
			}
		}
		else{
			j=1;
			s=0;
			if(b[r]==2 && n>=3 && a[1]>a[3]) {
				s=1;
				if(b[r]!=n){
					for(i=b[r]+1;i<=n;i++) cout<<a[i]<<" ";
				}
			}
			for(i=b[r]-1;i>0;i--){
				//cout<<endl<<i<<" "<<j<<" "<<a[i]<<" "<<a[j]<<endl;
				if(a[i]>a[j]) cout<<a[i]<<" ";
				else{
					//cout<<" "<<i<<" "<<j<<endl;
					for(ll k=j;k<=i;k++) cout<<a[k]<<" ";
					break;
				}
			}
			if(b[r]!=n && s==0){
				for(i=b[r]+1;i<=n;i++) cout<<a[i]<<" ";
			}
		}*/
		cout<<endl;
	}
	return 0;
}