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
ll arr[N],sum,n,res[N];
pair<ll,ll>g[N];
ll dp[N][6];
 
int main() {
	ios::sync_with_stdio(0);
    cin.tie(0);
    ll n,m,i,j;
    cin>>n>>m;
    string a,b;
    cin>>a;
    a+=a;n+=n;
    b=a[0];
    ll l=1;
    for(i=1;i<n;i++){
    	if(l==m|| a[i]>a[0]) break;
    	if(a[i]==a[0]){
    		//cout<<i<<" "<<a[i]<<" "<<a[i-1]<<" "<<a[i+1]<<" "<<a[0]<<endl;
    		j=0;
    		ll s=0;
    		while(i+j<n){
    			if(a[i+j]>a[j]) {s=1;break;};
    			if(a[i+j]<a[j]) break;
    			j++;
    		}
    		if(s==1) break;
    		else{
    			for(;i<j;i++){
    				b+=a[i];l++;
    			}
    		}
    	}
    	l++;
    	b+=a[i];
    }
    
    i=0;
    while(i<m){
    	for(j=0;j<l;j++){
    		i++;
    		cout<<b[j];
    		if(i==m) break;
    	}
    }
    return 0;
}