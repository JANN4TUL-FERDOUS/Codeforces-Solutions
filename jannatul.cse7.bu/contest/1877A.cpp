#include <bits/stdc++.h>
using namespace std;
#define ll long long


int main(){
	ios::sync_with_stdio(0);
    cin.tie(0);
    int t=1;
    cin>>t;
    int tt=t;
    while(t--){
		ll n,i,j,sum=0;
		cin>>n;
		ll a[n];
		for(i=0;i<n-1;i++){
			cin>>a[i];
			sum+=a[i];
		}
		cout<<(-1)*sum<<"\n";
	}
	return 0;
}