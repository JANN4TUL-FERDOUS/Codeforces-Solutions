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
		ll n,i,j,s=1,s2=0;
		cin>>n;
		string a;
		cin>>a;
		s2=1;
		for(i=1;i<n;i++){
			if(a[i]==a[i-1]) s2++;
			else s2=1;
			s=max(s,s2);
			
		}
		cout<<s+1<<endl;
	 }
	 return 0;
 }