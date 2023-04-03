#include <bits/stdc++.h>
using namespace std;
#define ll long long
const int N=3e5+7;
//ll b[N],a[N];
int main() {
	ios::sync_with_stdio(0);
    cin.tie(0);
  	int t;
  	cin>>t;
  	while(t--){
  		ll i,j,s=0,s2=0,z=0,n;
  		cin>>n;
  		string a;
  		cin>>a;
  		char c='z';
  		for(i=0;i<n;i++){
  			if(c>=a[i]){z=i;c=a[i];}
  		}
  		cout<<c;
  		for(i=0;i<n;i++){
  			if(i!=z)cout<<a[i];
  		}
  		cout<<endl;
  	}
  	return 0;
}