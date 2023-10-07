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
    //cin>>t;
    ll tt=t;
    while(t--){
		ll n,m,i,j,s2=0,z=0,ans=0;
		cin>>n;
		ll a[n];
		set<pair<ll,ll>>st;
		ll sum=0;
		for(i=0;i<n;i++){
			cin>>a[i];
			if(sum+a[i]<0){
				if(st.empty()) continue;
				auto x=*(st.begin());
				if(x.ff>=a[i]) continue;
				sum+=a[i];
				sum-=x.ff;
				st.insert({a[i],i});
				st.erase(x);
			}
			else{
				z++;
				sum+=a[i];
				st.insert({a[i],i});
			}
			//cout<<i<<" "<<z<<endl;
		}
		cout<<z<<"\n";
	}
	return 0;
}