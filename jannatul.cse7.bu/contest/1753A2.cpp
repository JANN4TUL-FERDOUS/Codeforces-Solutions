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
		ll n,m,k=0,i,j=1,s=0,s2=0;
		cin>>n;
		ll b[n];
		for(i=0;i<n;i++) cin>>b[i];
		pair<ll,ll>a[n];
		vector<pair<ll,ll>>v;
		j=0;
		for(i=0;i<n;i++){
			if(b[i]==0) continue;
			a[j++]={b[i],i+1};
		}
		if(j%2) {cout<<"-1\n";continue;}
		ll len=0;
		if(b[0]==0) {
			len=1;
			if(j==0) v.pb({1,1});
			else v.pb({1,a[0].ss-1});
		}
		for(i=0;i<j;i+=2){
			if(a[i].ss==n) {v.pb({n,n});break;}
			if(a[i].ff==a[i+1].ff){
				if(a[i].ss+1==a[i+1].ss){
					if(len>0 && v[len-1].ss+1!=a[i].ss){v.pb({v[len-1].ss+1,a[i].ss-1});len++;}
					v.pb({a[i].ss,a[i+1].ss});len++;
				}
				else{
					if(len==0 || v[len-1].ss+1==a[i].ss)v.pb({a[i].ss,a[i+1].ss-2});
					else {
						v.pb({v[len-1].ss+1,a[i].ss-1});
						v.pb({a[i].ss,a[i+1].ss-2});
						len++;
					}
					v.pb({a[i+1].ss-1,a[i+1].ss});
					len+=2;
				}
			}
			else{
				if(len==0 || v[len-1].ss+1==a[i].ss) v.pb({a[i].ss,a[i+1].ss-1});
				else {
					v.pb({v[len-1].ss+1,a[i].ss-1});
					v.pb({a[i].ss,a[i+1].ss-1});
					len++;
				}
				v.pb({a[i+1].ss,a[i+1].ss});
				len+=2;
			}
		}
		if( n>1 && b[n-1]==0) {v.pb({v[len-1].ss+1,n});len++;}
		cout<<len<<"\n";
		for(i=0;i<len;i++){
			cout<<v[i].ff<<" "<<v[i].ss<<endl;
		}
	}
	return 0;
}