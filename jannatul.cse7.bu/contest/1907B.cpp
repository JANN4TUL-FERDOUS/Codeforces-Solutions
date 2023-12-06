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

int main(){
	ios::sync_with_stdio(0);
    cin.tie(0);
    int t;
    cin>>t;
    while(t--){
    	ll n,i,j,s=0;
    	string a;
    	cin>>a;
    	stack<ll>st,st2;
    	map<ll,ll>mp;
    	n=a.length();
    	for(i=0;i<n;i++){
    		if(a[i]=='b'){
    			if(!st.empty()){
    				ll x=st.top();
    				st.pop();
    				mp[x]=1;
    			}
    			mp[i]=1;
    		}
    		else if(a[i]=='B'){
    			if(!st2.empty()){
    				ll x=st2.top();
    				st2.pop();
    				mp[x]=1;
    			}
    			mp[i]=1;
    		}
    		else if(a[i]>='a' && a[i]<='z')st.push(i);
    		else if(a[i]>='A' && a[i]<='Z') st2.push(i);
    	}
    	for(i=0;i<n;i++){
    		if(mp[i]==0) cout<<a[i];
    	}
    	cout<<"\n";
    }
	return 0;
}