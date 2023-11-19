#include <bits/stdc++.h>
using namespace std;
#define ll long long
#define ff first
#define ss second
#define pb push_back
 
const int N=1e6+7;
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
		ll n,m,k=0,i,j=0;
		cin>>n;
		ll a[n];
		set<ll>st;
		for(i=0;i<n;i++){
			cin>>a[i];
			st.insert(a[i]);
		}
		sort(a,a+n);
		ll ans=a[0]*a[n-1];
		for(i=2;i*i<=ans;i++){
			if(ans%i==0){
				if(st.count(i)){
					st.erase(i);
					if(i!=ans/i){
						if(st.count(ans/i)) st.erase(ans/i);
						else {ans=-1;break;}
					}
				}
				else {ans=-1;break;}
			}
		}
		if(!st.empty()) ans=-1;
		cout<<ans<<"\n";
	}
	return 0;
}