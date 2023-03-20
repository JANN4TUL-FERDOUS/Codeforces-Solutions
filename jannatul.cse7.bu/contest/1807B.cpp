#include <bits/stdc++.h>
using namespace std;
#define ll long long
const int N=2e5+7;
//string a,b;
int main() {
	ios::sync_with_stdio(0);
    cin.tie(0);
  	int t;
  	cin>>t;
  	while(t--){
  		ll n,i,j,s=0,s0=0,s1=0,s2=0,x=0,z=0;
  		cin>>n;
  		ll a[n];
  		for(i=0;i<n;i++){
  			cin>>a[i];
  			if(a[i]%2==0) s+=a[i];
  			else s2+=a[i];
  		}
  		//cout<<s<<" "<<s2<<endl;
  		if(s>s2) cout<<"YES\n";
  		else cout<<"NO\n";
  	}
	return 0;
}