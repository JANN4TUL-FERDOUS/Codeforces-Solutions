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

int main() {
	ios::sync_with_stdio(0);
    cin.tie(0);
  	int t;
  	cin>>t;
  	int l=t;
  	while(t--){
  		ll n,i,j,k=0,len,s=0;
  		cin>>n;
  		ll a[n];
  		ll z=0;
  		pair<ll,ll>pr[n];
  		map<ll,ll>mp,mp2;
  		for(i=0;i<n;i++){
  			cin>>a[i];
  			pr[i]={a[i],i};
  			mp[a[i]]++;
  			if(mp[a[i]]==2) s++; 
  		}
  		if(s<2) cout<<"-1\n";
  		else{
  			sort(pr,pr+n);
  			a[pr[0].ss]=1;
  			mp2[pr[0].ff]++;
  			s=1;
  			for(i=1;i<n;i++){
  				mp2[pr[i].ff]++;
  				if(mp2[pr[i].ff]==2) z++;
  				if(z==1){
  					if(mp2[pr[i].ff]==1) s=1;
  					else s=2;
  				}
  				if(z>=2){
  					if(mp2[pr[i].ff]==1) s=1;
  					else s=3;
  				}
  				a[pr[i].ss]=s;
  			}
  			for(i=0;i<n;i++) cout<<a[i]<<" ";
  			cout<<"\n";
  		}
	}
	return 0;
}