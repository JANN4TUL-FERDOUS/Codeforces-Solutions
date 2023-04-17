#include <bits/stdc++.h>
using namespace std;
#define ll long long
const int N=3e5+7;
//ll a[N];
//int a[4]={-1,1,0,0};
//int b[4]={0,0,-1,+1};
string a;
int main() {
	ios::sync_with_stdio(0);
    cin.tie(0);
	int t;
	cin>>t;
	while(t--){
		ll n,i,j,s=0,s2=0,z=0;
		string a;
		cin>>a;
		ll l=a.length();
		a+=a;
		for(i=0;i<2*l;i++){
			if(a[i]=='1') s++;
			else s=0;
			s2=max(s,s2);
		}
		if(l==1) cout<<s2/2<<"\n";
		else if(s2==2*l) cout<<l*l<<"\n";		
		else{
			z=(s2+1)/2;
			if(s2%2) cout<<z*z<<"\n";
			else cout<<z*(z+1)<<"\n";
		}
	}
	return 0;
}