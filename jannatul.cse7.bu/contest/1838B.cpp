#include <bits/stdc++.h>
using namespace std;
#define ll long long
#define ff first
#define ss second
#define pb push_back
const int N=3e5+3;
ll mod=1e9+7;
int main() {
	ios::sync_with_stdio(0);
    cin.tie(0);
	ll t;
	cin>>t;
	ll l=0;
	while(t--){
		//cout<<"testcase "<<l++<<endl;
		ll n,i,j,k,s=0,s2=0,z=0,x,s3=0,m;
		cin>>n;
		ll a[n+1];
		for(i=1;i<=n;i++){
			cin>>a[i];
			if(a[i]==1) s=i;
			else if(a[i]==2) s2=i;
			else if(a[i]==n) s3=i;
		}
		//cout<<s<<" "<<s2<<" "<<s3<<endl;
		if((s<s2 && s2<s3) || (s>s2 && s2>s3)) cout<<s2<<" "<<s3<<"\n";
		else if((s>s2 && s3>s) ||(s>s3 && s2>s)) cout<<s<<" "<<s3<<"\n";
		else cout<<"1 1\n";
		
	}
	return 0;
}