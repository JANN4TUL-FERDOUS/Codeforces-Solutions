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
ll par[N];

int main(){
	ios::sync_with_stdio(0);
    cin.tie(0);
   	ll n,i,j,s=0;
   	cin>>n;
   	string a;
   	vector<char>v;
   	map<char,ll>mp;
   	cin>>a;
   	for(i=0;i<n;i++){
   		if(mp[a[i]]==0) s++;
   		mp[a[i]]++;
   	}
    ll l=1,r=n,ans=0;
    //cout<<s<<"\n";
    while(l<=r){
    	ll mid=(l+r)/2;
    	ll z=0,cnt=0;
    	j=0;
    	for(i=0;i<n;i++) mp[a[i]]=0;
    	for(i=0;i<n;i++){
    		j++;
    		if(mp[a[i]]==0)cnt++;
    		mp[a[i]]++;
    		if(cnt==s) {z=1;break;}
    		if(j>=mid) {
    			mp[a[i-mid+1]]--;
    			if(mp[a[i-mid+1]]==0) cnt--;
			}
    		//cout<<i<<" "<<j<<" "<<mid<<" "<<cnt<<endl;
    	}
    	if(z==1){
    		r=mid-1;
    		ans=mid;
    	}
    	else l=mid+1;
    }
    cout<<ans<<"\n";
	return 0;
}