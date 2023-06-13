#include <bits/stdc++.h>
using namespace std;
#define ll long long
#define ff first
#define ss second
#define pb push_back
const int N=1e5;
ll mod=1e9+7;
//ll bt[N][N];
ll ax[8]={0,0,-1,+1,-1,-1,1,1};
ll ay[8]={-1,1,0,0,-1,1,-1,1};
int main() {
	ios::sync_with_stdio(0);
    cin.tie(0);
    ll t;
    t=1;
    while(t--){
    	ll n,i,j,s=0,s2=0,ans=0,res=0,temp=0;
    	ll m,k;
    	cin>>n;
    	map<ll,ll>mp;
    	string a;
    	cin>>a;
    	vector<ll>v;
    	for(i=0;i<n;i++){
    		if(a[i]=='G') s++;
    		else{
    			if(i>0 && a[i-1]=='G') {
    				res++;
    				if(s+s2>=ans && s2>0)temp=s+s2;
    				if(s+s2>ans && s2==ans) mp[s+s2]++;
    				ans=max(ans,s+s2);
    				
    				s2=s;
				}
    			else{s2=0;}
    			s=0;
			}
    	}
    	if(i>0 && a[i-1]=='G') {
			res++;
			if(s+s2>=ans && s2>0)temp=s+s2;
			ans=max(ans,s+s2);
		}
		if((res>2 && temp==ans) || (res>1 && (temp!=ans || mp[ans]>1)))ans++;
		cout<<ans<<"\n";
    		
    }
	return 0;
}