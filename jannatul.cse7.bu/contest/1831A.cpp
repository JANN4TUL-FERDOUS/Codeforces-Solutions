#include <bits/stdc++.h>
using namespace std;
#define ll long long
#define ff first
#define ss second
const int N=3e5+3;
int main() {
	ios::sync_with_stdio(0);
    cin.tie(0);
	int t;
	cin>>t;
	int l=t;
	while(t--){
		//cout<<"Case "<<l-t<<": ";
		ll n,i,j,k,s2=0,s=0;
		cin>>n;
		ll a[n];
		for(i=0;i<n;i++){
			cin>>a[i];
			
		}
		for(i=0;i<n;i++){
			cout<<n-a[i]+1<<" ";
		}
		cout<<endl;
	}
	return 0;
}