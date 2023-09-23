#include <bits/stdc++.h>
using namespace std;
#define ll long long
const int N=1e5+7;
ll a[N],n,m,ans=0;

int main() {
	ios::sync_with_stdio(0);
    cin.tie(0);
	ll t;
	cin>>t;
	ll tt=t;
	while(t--){
		//cout<<"Case "<<tt-t<<": ";
		ll i,j=-1,s=0,s2=0,k;
		cin>>n>>k;
		string a;
		cin>>a;
		for(i=0;i<n;i++){
			if(a[i]=='B') {
				s++;
				i+=k-1;
			}
		}
		cout<<s<<"\n";
	}
	return 0;
}