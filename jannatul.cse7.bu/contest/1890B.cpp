#include <bits/stdc++.h>
using namespace std;
#define ll long long
#define ff first
#define ss second
#define pb push_back
 
const int N=3e5+7;
ll mod=1e9+7;
ll ax[8]={0,0,-1,+1,-1,-1,1,1};
ll ay[8]={-1,1,0,0,-1,1,-1,1};
ll kx[8]={2,2,-2,-2,1,1,-1,-1};
ll ky[8]={1,-1,1,-1,2,-2,2,-2};

int main(){
	ios::sync_with_stdio(0);
    cin.tie(0);
    ll t=1;
    cin>>t;
    ll tt=t;
    while(t--){
		//cout<<"Case "<<tt-t<<": ";
		ll n,m,k,i,j=0,s=0,s2=0;
		cin>>n>>m;
		string a,b;
		cin>>a>>b;
		for(i=1;i<n;i++){
			if(a[i]==a[i-1]) {s=1;break;}
		}
		for(i=1;i<m;i++){
			if(b[i]==b[i-1]) s2=1;
		}
		if(b[0]!=b[m-1]) s2=1;
		if(s==1 && s2==1){cout<<"NO\n";continue;}
		if(s==0) {cout<<"YES\n";continue;}
		ll z=0;
		for(i=1;i<n;i++){
			if(a[i]==a[i-1]){
				if(b[0]==a[i]) {z=1;break;}
			}
		}
		if(z==1) cout<<"NO\n";
		else cout<<"YES\n";
	}
	return 0;
}