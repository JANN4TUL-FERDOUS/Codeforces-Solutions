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
		ll n,i,j,s=0,s2=0,z=0,z2=0,x=0,x2=0,det=0,det2=0;
		cin>>n;
		ll a[n+1],b[n+1]={0},c[n+1]={0};
		for(i=1;i<=n;i++){
			cin>>a[i];
			b[i]=max(b[i-1],a[i]+i);
		}
		for(i=n;i>0;i--){
			if(i==n) c[i]=a[i]-i;
			else c[i]=max(c[i+1],a[i]-i);
		}
		for(i=2;i<n;i++){
			s2=a[i]+b[i-1]+c[i+1];
			s=max(s,s2);
		}
		cout<<s<<"\n";
	 }
	 return 0;
 }