#include <bits/stdc++.h>
using namespace std;
#define ll long long
const int N=2e5+7;
vector<pair<ll,ll>>vv(N);
int main() {
	ios::sync_with_stdio(0);
    cin.tie(0);
  	int t;
  	cin>>t;
  	while(t--){
  		ll n,m,s=0,s2=1e10,s3=1e10,x,y;
  		cin>>n>>m;
  		cout<<"? "<<1<<" "<<1<<endl;
  		fflush(stdout);
  		cin>>s;  		
  		if(s+1<=m){
  			cout<<"? "<<1<<" "<<s+1<<endl;
	  		fflush(stdout);
	  		cin>>s2;
  			if(s2==0) {cout<<"! "<<1<<" "<<s+1<<endl;continue;}
  		}
  		if(s+1<=n){
  			cout<<"? "<<s+1<<" "<<1<<endl;
	  		fflush(stdout);
	  		cin>>s3;
	  		if(s3==0) {cout<<"! "<<s+1<<" "<<1<<endl;continue;}
  		}
  		if(s2==s3) cout<<"! "<<s+1<<" "<<s+1<<endl;
  		else cout<<"! "<<min(s2+1,s+1)<<" "<<min(s3+1,s+1)<<endl;
	}
	return 0;
}