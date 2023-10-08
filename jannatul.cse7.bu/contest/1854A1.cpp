#include <bits/stdc++.h>
using namespace std;
#define ll long long
#define ff first
#define ss second
#define pb push_back
 
const int N=2e6+7;
ll mod=998244353;
int ax[8]={0,0,-1,+1,-1,-1,1,1};
int ay[8]={-1,1,0,0,-1,1,-1,1};
int kx[8]={2,2,-2,-2,1,1,-1,-1};
int ky[8]={1,-1,1,-1,2,-2,2,-2};
//const ll len=180;
vector<pair<ll,ll>>v;

int main(){
	ios::sync_with_stdio(0);
    cin.tie(0);
    ll t=1;
    cin>>t;
    ll tt=t;
    while(t--){
		//cout<<"Case "<<tt-t<<": ";
		ll n,m,i,j,s=0,s2=0,z=0,z2=0,x=0,d;
		cin>>n;
		ll a[n+1];
		v.clear();
		ll mx=0,pos=0,neg=0;
		for(i=1;i<=n;i++){
			cin>>a[i];
			if(a[i]>0) pos++;
			else if(a[i]<0) neg++;
			if(abs(a[i])>z) {
				z=abs(a[i]);
				mx=i;
			}
		}
		if(pos==0) for(i=n-1;i>0;i--) v.pb({i,i+1});
		else if(neg==0) for(i=2;i<=n;i++) v.pb({i,i-1});
		else{
			if(pos<=7){
				ll id=0;
				for(i=1;i<=n;i++){
					if(a[i]<0) id=i;
				}
				for(i=1;i<=5;i++){
					v.pb({id,id});
					a[id]*=2;
				}
				for(i=1;i<=n;i++){
					if(a[i]>0) {
						v.pb({i,id});
						a[i]+=a[id];
					}
				}
				for(i=n-1;i>0;i--) v.pb({i,i+1});
			}
			else if(neg<=7){
				ll id=0;
				for(i=1;i<=n;i++){
					if(a[i]>0) id=i;
				}
				for(i=1;i<=5;i++){
					v.pb({id,id});
					a[id]*=2;
				}
				for(i=1;i<=n;i++){
					if(a[i]<0){
						v.pb({i,id});
						a[i]+=a[id];
					}
				}
				for(i=2;i<=n;i++) v.pb({i,i-1});
			}
			else{
				if(a[mx]>0){
					for(i=1;i<=n;i++){
						if(a[i]<0){
							v.pb({i,mx});
							a[i]+=a[mx];
						}
					}
					for(i=2;i<=n;i++) v.pb({i,i-1});
				}
				else{
					for(i=1;i<=n;i++){
						if(a[i]>0){
							v.pb({i,mx});
							a[i]+=a[mx];
						}
					}
					for(i=n-1;i>0;i--) v.pb({i,i+1});
				}
			}
		}
		cout<<v.size()<<"\n";
		for(i=0;i<(int)v.size();i++){
			cout<<v[i].ff<<" "<<v[i].ss<<"\n";
		}
	}
	return 0;
}