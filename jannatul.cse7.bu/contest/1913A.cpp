#include <bits/stdc++.h>
using namespace std;
#define ll long long
#define ff first
#define ss second
#define pb push_back
 
const int N=5e5+7;
ll mod=1e9+7;
ll ax[8]={0,0,-1,+1,-1,-1,1,1};
ll ay[8]={-1,1,0,0,-1,1,-1,1};
ll kx[8]={2,2,-2,-2,1,1,-1,-1};
ll ky[8]={1,-1,1,-1,2,-2,2,-2};
const ll len=400;
vector<ll>v[len],sum[len];
ll a[N],ln;

int main(){
	ios::sync_with_stdio(0);
    cin.tie(0);
    ll t=1;
    cin>>t;
    ll tt=t;
    while(t--){
		//cout<<"Case "<<tt-t<<": ";
		ll n,m,i,j,z=0;
		string a;
		cin>>a;
		int s=0,s2=0;
		s=a[0]-'0';
		for(i=1;i<a.length();i++){
			if(z==0 && a[i]!='0' && i)z=1;
			if(z) s2=s2*10+a[i]-'0';
			else s=s*10+a[i]-'0';
			
		}
		if(s2>s) cout<<s<<" "<<s2<<"\n";
		else cout<<"-1\n";
		
	}
	return 0;
}