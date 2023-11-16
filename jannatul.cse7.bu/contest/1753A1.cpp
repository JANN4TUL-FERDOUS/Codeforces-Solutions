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
		cin>>n;
		ll a[n];
		vector<pair<ll,ll>>v;
		for(i=0;i<n;i++) cin>>a[i];
		if(n%2){cout<<"-1\n";continue;}
		for(i=0;i<n;i+=2){
			if(a[i]==a[i+1]){v.pb({i+1,i+2});}
			else {v.pb({i+1,i+1});v.pb({i+2,i+2});}		
		}
		cout<<v.size()<<"\n";
		for(i=0;i<v.size();i++){
			cout<<v[i].ff<<" "<<v[i].ss<<endl;
		}
	}
	return 0;
}