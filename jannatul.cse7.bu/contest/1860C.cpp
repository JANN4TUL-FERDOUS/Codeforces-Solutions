#include <bits/stdc++.h>
using namespace std;
#define ll long long
#define ff first
#define ss second
#define pb push_back

const int N=2e5+7;
ll mod=1e9+7;
ll ax[8]={0,0,-1,+1,-1,-1,1,1};
ll ay[8]={-1,1,0,0,-1,1,-1,1};
bitset<N>bt;
vector<ll>g[N];
ll a[N],b[N];

int main() {
	ios::sync_with_stdio(0);
    cin.tie(0);
    ll t;
    cin>>t;
    while(t--){
    	ll n,m,i,j,s=0,z=1e15,z2=-1e15;
		cin>>n;
		ll a[n];
	    map<ll,ll>mp;
	    vector<ll>v;
		for(i=0;i<n;i++){
			cin>>a[i];
			if(i==0 || a[i]<z){
				z=a[i];
				//z2=-1e15;
			}
			else{
				if(a[i]>z && (z2==-1e15 || a[i]<z2 )){s++;z2=a[i];}
			}
			
		}
		cout<<s<<"\n";
	}
    return 0;
}