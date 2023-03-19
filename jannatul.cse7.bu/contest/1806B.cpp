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
  			if(a[i]==0) s0++;
  			else if(a[i]==1) s1++;
  			else {
  				s2++;
  				if(a[i]==2) z++;
			}
  		}
  		sort(a,a+n);
  		if(s0==0 || s1+s2>=s0-1) cout<<"0\n";
  		else if(s1==0 || s2>0) cout<<"1\n";
  		else if(s2==0) cout<<"2\n";
  	}
	return 0;
}