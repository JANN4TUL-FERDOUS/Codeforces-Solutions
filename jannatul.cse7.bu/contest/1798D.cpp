#include <bits/stdc++.h>
using namespace std;
#define ll long long
const int N=3e5+7;
ll b[N],a[N];
int main() {
	ios::sync_with_stdio(0);
    cin.tie(0);
  	int t;
  	cin>>t;
  	while(t--){
  		ll n,i,j,k,s=0,s2=0,s3=0,z=0;
  		cin>>n;
  		vector<ll>v;
  		for(i=0;i<n;i++)cin>>a[i];
  		sort(a,a+n);
  		if(n==1 || a[n-1]==0) cout<<"No\n";
  		else{
	  		cout<<"Yes\n";
	  		s3=a[n-1]-a[0];
	  		i=0;j=n-1;
	  		while(i<=j){
	  			if(s>0) {v.push_back(a[i]);s+=a[i++];}
	  			else {v.push_back(a[j]);s+=a[j--];}
	  		}
	  		for(i=0;i<n;i++) cout<<v[i]<<" ";
	  		cout<<endl;
		}
				
	}
	return 0;
}