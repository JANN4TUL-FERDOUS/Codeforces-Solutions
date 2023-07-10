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
bitset<N>bt;
ll arr[N];
vector<ll>g[N];

int main() {
	ios::sync_with_stdio(0);
    cin.tie(0);
    ll t;
    cin>>t;
    while(t--){
    	string a;
    	cin>>a;
    	ll k,i,j,s=0,x;
    	cin>>k;
    	ll l=a.length();
    	vector<char>st;
    	for(i=0;i<l;i++){
    		//cout<<i<<" "<<k<<" "<<st.size()<<endl;
    		if(st.empty() || k==0) st.pb(a[i]);
    		else if(a[i]=='0'){
    			while(k>0 && st.back()>a[i] && st.size()>1) {k--;st.pop_back();}
    			st.pb(a[i]);
    		}
    		else if(a[i]<st[0] && k>=st.size()){
    			k-=st.size();
    			st.clear();
    			st.pb(a[i]);
    		}
    		else if(a[i]>=st.back()) st.pb(a[i]);
    		else if(a[i]<st.back()){
    			while(k>0 && st.back()>a[i] && st.size()>0){k--;st.pop_back();}
    			st.pb(a[i]);
    		}
    	}
    	while(k--)st.pop_back();
    	for(char c:st) cout<<c;
    	cout<<endl;
    }
    return 0;
}