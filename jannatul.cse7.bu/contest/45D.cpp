#include <bits/stdc++.h>
using namespace std;
#define ll long long
#define ff first
#define ss second
#define pb push_back

const int N=1e7+7;
ll mod=1e9+7;
ll ax[8]={0,0,-1,+1,-1,-1,1,1};
ll ay[8]={-1,1,0,0,-1,1,-1,1};
bitset<N>bt;
vector<ll>v;

int main() {
	ios::sync_with_stdio(0);
    cin.tie(0);
    ll n,i,j;
    cin>>n;
    ll arr[n];
    pair<pair<ll,ll>,ll>a[n];
    for(i=0;i<n;i++){
    	ll l,r;
    	cin>>l>>r;
    	a[i]={{r,l},i};
    }
    sort(a,a+n);
    for(i=0;i<n;i++){
    	for(j=a[i].ff.ss;j<=a[i].ff.ff;j++){
    		if(bt[j]==0) {
    			bt[j]=1;
    			arr[a[i].ss]=j;
    			break;
    		}
    	}
    }
    for(i=0;i<n;i++) cout<<arr[i]<<" ";
    cout<<endl;
	
	return 0;
}