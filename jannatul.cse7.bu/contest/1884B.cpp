#include <bits/stdc++.h>
using namespace std;
#define ll long long
#define ff first
#define ss second
#define pb push_back
 
const ll N=2e5+7;
ll mod=1e9+7;
ll ax[8]={0,0,-1,+1,-1,-1,1,1};
ll ay[8]={-1,1,0,0,-1,1,-1,1};
ll kx[8]={2,2,-2,-2,1,1,-1,-1};
ll ky[8]={1,-1,1,-1,2,-2,2,-2};
 
int main(){
	ios::sync_with_stdio(0);
    cin.tie(0);
    int t=1;
    cin>>t;
    while(t--){
    	ll i,n,m,k,j,s=0,x=0;
    	cin>>n;
    	set<ll>st;
    	string a;
    	cin>>a;
    	for(i=0;i<n;i++){
    		if(a[i]=='0') st.insert(-i);
    		if(a[i]=='1') s++;
    	}
    	x=0;
    	for(i=n-1;i>=0;i--){
    		if(s>i) cout<<"-1 ";
    		else if(a[i]=='0') cout<<x<<" ";
    		else{
    			ll it=*st.upper_bound(-i);
    			st.erase(it);
    			x+=abs(i+it);
    			a[-it]='1';
    			cout<<x<<" ";
    		}
    	}
    	cout<<"\n";
	}
	return 0;
}