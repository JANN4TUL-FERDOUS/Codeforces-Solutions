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
  		string a;
  		cin>>a;
  		map<char,int>m,m2;
  		z=1;
  		for(i=0;i<n;i++){
  			if(i%2==0) {
  				if(m[a[i]]==1){x=1;break;}
  				m[a[i]]=2;
  			}
  			else{
  				if(m[a[i]]==2){x=1;break;}
  				m[a[i]]=1;
  			}
  		}
  		if(x==1) cout<<"NO\n";
  		else cout<<"YES\n";
  	}
	return 0;
}