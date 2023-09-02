#include <bits/stdc++.h>
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
ll num=1e17;
int main() {
	ios::sync_with_stdio(0);
    cin.tie(0);
    ll t;
    cin>>t;
    ll len=t;
    while(t--){
    	ll n,i,j,k,s=0,z=1e9,z2=0,ans=-1,l=0,ok=0,ok2=0;
    	string a;
    	cin>>a;
    	stack<pair<ll,ll>>st;
    	n=a.length();
    	for(i=0;i<n;i++){
    		if(a[i]=='+'){ok=1;l++;st.push({1,1});}
    		else if(a[i]=='-'){
    			l--;st.pop();
    			if(l<z) z=1e9;
    			z2=min(z2,l);
    		}
    		else if(a[i]=='0'){
    			//cout<<i<<" "<<z2<<" "<<z<<endl;
    			if( l<=1){s=1;break;}
    			pair<ll,ll>p=st.top();
    			if(l<=z2 || p.ss==0) {s=1;break;}
    			p.ff=0;
    			st.top()=p;
    			z=min(z,l);
    			ok=0;
    		}
    		else{
    			if( l<=0) continue;
    			pair<ll,ll>p=st.top();
    			if(p.ff==0 || l>z) {s=1;break;}
    			p.ss=0;
    			st.top()=p;
    			z2=max(z2,l);
    			ok=0;
    		}
    		//if(l<0) {s=1;break;}
    		//cout<<i<<" "<<ok<<" "<<ok2<<" "<<z<<" "<<z2<<endl;
    	}
    	if(s==1) cout<<"NO\n";
    	else cout<<"YES\n";
    	
    }
     return 0;
}