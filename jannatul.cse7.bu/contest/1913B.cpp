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
		n=a.length();
		for(i=0;i<n;i++){
			if(a[i]=='0') s++;
			else s2++;
		}
		ll ans=0;
		for(i=0;i<n;i++){
			if(a[i]=='1'){
				if(s==0){
					ans=n-i;
					break;
				}
				else s--;
			}
			else{
				if(s2==0) {
					ans=n-i;
					break;
				}
				else s2--;
			}
		}
		cout<<ans<<"\n";
	}
	return 0;
}