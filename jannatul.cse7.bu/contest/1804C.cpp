#include<bits/stdc++.h>
using namespace std;
#define ll long long 
const int nn=2e5+7;
ll a[nn];
vector<int>v;
int main(){
	ios::sync_with_stdio(false);
    cin.tie(NULL);
    int t;
    cin>>t;
    while(t--){    	
	    ll n,x,p,s=0,s2=0,i,j,z=0;
	    cin>>n>>x>>p;
	    s=n-x;
	    for(i=1;i<=min(p,2*n);i++){
	    	s2=i*(i+1);
	    	s2/=2;
	    	if(s2%n==s || (s==n && s2%n==0)){z=1;break;}
	    	//cout<<s<<" "<<s2<<" "<<s2%n<<endl;
	    }
	    if(z==1) cout<<"YES\n";
	    else cout<<"NO\n";
    }
	return 0;
}