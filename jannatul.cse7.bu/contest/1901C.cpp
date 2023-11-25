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
		ll  n,m,i,j,k;
		cin>>n;
		ll a[n];
		ll ans=0;
		vector<ll>v;
		ll mx=-1e12,mn=1e12;
		for(i=0;i<n;i++){
			cin>>a[i];
			mx=max(a[i],mx);
			mn=min(mn,a[i]);
		}
		//cout<<"mx"<<mx<<" "<<mn<<endl;
		if(mx==mn){cout<<"0\n";continue;}
		ll z=0,mul=1,val;
		ll x=mx,y=mn,x2=mx,y2=mn;
		i=1;
		while(1){
			if(x%2==0 && y%2==1)  {v.pb(1);x=(x+1)/2;y=(y+1)/2;}
			else {v.pb(0);x/=2;y/=2;}
			//cout<<i<<" "<<x<<" "<<y<<endl;
			if(x==y){val=0;z=i;break;}			
			i++;
		}		
		cout<<z<<"\n";
		if(z<=n){
			for(i=0;i<z;i++) cout<<v[i]<<" ";
			cout<<"\n";
		}
	}
	return 0;
}