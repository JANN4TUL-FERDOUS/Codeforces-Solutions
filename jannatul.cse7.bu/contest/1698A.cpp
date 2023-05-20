#include <bits/stdc++.h>
using namespace std;
#define ll long long
const int N=3e5+7;
int main() {
	ios::sync_with_stdio(0);
    cin.tie(0);
	int t;
	cin>>t;
	while(t--){
		ll n,k,i,j,s=0,s2=0,z=0;
		cin>>n;
		ll a[n];
		for(i=0;i<n;i++){
			cin>>a[i];
		}
		for(i=0;i<n;i++){
			s=-1;
			for(j=0;j<n;j++){
				if(i==j) continue;
				if(s==-1) s=a[j];
				else s^=a[j];
				//cout<<a[i]<<" "<<s<<endl;
			}
			if(s==a[i]){
				cout<<a[i]<<endl;
				break;
			}
		}
	}
	return 0;
}