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
  		ll i,j,s=0,s2=0,z=0,n,d;
  		cin>>n>>d;
  		string a;
  		//int d;
  		cin>>a;
  		for(i=0;i<n;i++){
  			s=a[i]-'0';
  			//cout<<s<<endl;
  			if(s<d && z==0){z=1;
  				cout<<d;
			}
			cout<<s;
  		}
  		if(z==0) cout<<d;
  		cout<<endl;
  	}
  	return 0;
}