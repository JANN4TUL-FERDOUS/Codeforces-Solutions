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
ll arr[N];
vector<ll>g[N];

int main() {
	ios::sync_with_stdio(0);
    cin.tie(0);
    ll t;
    cin>>t;
    while(t--){
    	ll n,h,i,j,k,z=0,ans=0,temp=0,res=0;
    	cin>>n;
    	ll a[n],b[n];
    	temp=n*(n+1);
    	temp/=2;
    	map<ll,ll>mp;
    	vector<ll>v;
    	set<ll>st;
    	for(i=0;i<n-1;i++){
    		cin>>a[i];
    		if(a[i]>temp) z=1;
    		st.insert(i+1);
    	}
    	//cout<<n<<" "<<temp<<" "<<z<<endl;
    	st.insert(n);
    	if(z==1) {cout<<"NO\n";continue;}
    	for(i=0;i<n-1;i++){
    		if(i==0){
    			if(a[i]<=n){
    				mp[a[i]]++;
    				st.erase(a[i]);
				}
				else v.pb(a[i]);
    		}
    		else{
    			ll x=a[i]-a[i-1];
    			mp[x]++;
    			if(x>n) {v.pb(x);}
    			else if(mp[x]>=2){
    				if(mp[x]>2) {z=1;break;}
    				v.pb(x);
    			}
    			else{st.erase(x);}
    		}
    	}
    	//cout<<st.size()<<" "<<v.size()<<endl;
    	if(z==1) {cout<<"NO\n";continue;}
    	if(v.size()==0 && st.size()==1) {cout<<"YES\n";continue;}
    	ll c=0;
    	temp=0;
    	for(ll x:st){
    		c++;
    		temp+=x;
    		if(c==2) break;
    	}
    	//cout<<z<<" "<<v.size()<<" "<<v[0]<<" "<<st.size()<<" "<<temp<<endl;
    	if(v.size()==1 && v[0]==temp) cout<<"YES\n";
    	//if(z==0 && ((v.size()==0 && st.size()==1) || (v.size==1 && v[0]==temp))) cout<<"YES\n";
    	else cout<<"NO\n";
    }
    return 0;
}