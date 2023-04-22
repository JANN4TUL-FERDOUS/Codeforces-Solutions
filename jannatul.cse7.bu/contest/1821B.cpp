#include <bits/stdc++.h>
using namespace std;
#define ll long long
const int N=1e7+7;
const ll mod=1e9+7;
ll a[N],b[N],c[N];
int main() {
	ios::sync_with_stdio(0);
    cin.tie(0);
	int t,i,j;
	cin>>t;
	while(t--){
		ll n,i,j,k,s=0,s2=0,z=0,z2=0;
		cin>>n;
		j=0;k=n-1;
		for(i=0;i<n;i++){cin>>a[i];c[i]=a[i];}
		for(i=0;i<n;i++) cin>>b[i];
		for(i=0;i<n;i++){
			if(a[i]!=b[i]) {s=i;break;}
			else if(a[i]==b[i]) z2++; 
		}
		for(i=n-1;i>=s;i--){
			if(a[i]!=b[i]) {s2=i;break;}
		}
		ll v=b[s];
		for(i=s-1;i>=0;i--){
			if(a[i]>v) break;
			else {s=i;v=a[i];}
		}
		v=b[s2];
		for(i=s2+1;i<n;i++){
			if(a[i]<v) break;
			else {s2=i;v=a[i];}
		}
		cout<<s+1<<" "<<s2+1<<"\n";
	}
	return 0;
}