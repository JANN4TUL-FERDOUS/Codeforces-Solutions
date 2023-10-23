#include <bits/stdc++.h>
using namespace std;
#define ll unsigned long long
#define ff first
#define ss second
#define pb push_back
 
const ll N=1e6+7;
ll mod=1e9+7;

int main(){
	ios::sync_with_stdio(0);
    cin.tie(0);
    int t=1;
   // cin>>t;
    while(t--){
    	ll i,n,m,k,j,s=0,x=0;
    	cin>>n;
    	multiset<ll>st,st2;
    	char ch;
    	for(i=0;i<n;i++){
    		ll a,b;
    		cin>>ch>>a>>b;
    		if(ch=='+'){st.insert(-a);st2.insert(b);}  
    		else {st.erase(st.find(-a));st2.erase(st2.find(b));}  
    		if(st.size() && *st2.begin()<-(*st.begin())) cout<<"YES\n";
    		else cout<<"NO\n";		
    	}
	}
	return 0;
}