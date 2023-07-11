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
bitset<N>bt;
ll arr[N],sum,n,res[N];
pair<ll,ll>g[N];
 
int main() {
	ios::sync_with_stdio(0);
    cin.tie(0);
    ll t;
    cin>>t;
    while(t--){
    	ll n,i,j,s=0;
    	cin>>n;
    	ll arr[n],b[n];
    	pair<ll,ll>a[n];
    	for(i=0;i<n;i++){
    		cin>>a[i].ff;arr[i]=0;
    		a[i].ss=i;
    	}
    	for(i=0;i<n;i++) cin>>b[i];
    	sort(a,a+n);
    	arr[a[n-1].ss]=1;
    	j=n-1;s=b[a[n-1].ss];
    	for(i=n-2;i>=0;i--){
    		if(b[a[i].ss]>s){
    			while(j>i){
    				j--;
    				arr[a[j].ss]=1;
    				s=min(s,b[a[j].ss]);
    			}
    		}
    	}
    	for(i=0;i<n;i++) cout<<arr[i];
    	cout<<endl;
    }
    return 0;
}