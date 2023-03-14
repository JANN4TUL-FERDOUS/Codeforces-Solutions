#include <bits/stdc++.h>
using namespace std;
#define ll long long
const int nn=1e5+2;
int main() {
	ios::sync_with_stdio(false);
    cin.tie(NULL);
    int t;
    cin>>t;
    while(t--){
    	ll n,k,i,s2=0,z=0,s=0;
	    cin>>n;
	    ll a;
	    priority_queue<ll>q;
	    while(n--){
	    	cin>>a;
	    	if(a==0){
	    		if(q.size()>0){
	    			s2+=q.top();
	    			q.pop();
    			}
	    		
	    	}
	    	else q.push(a);
	    }
	    cout<<s2<<endl;
    }
	return 0;
}