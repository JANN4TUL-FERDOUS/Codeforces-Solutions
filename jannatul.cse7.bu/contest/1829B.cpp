#include <bits/stdc++.h>
using namespace std;
#define ll long long
const int N=3e5+7;
int main() {
	ios::sync_with_stdio(0);
    cin.tie(0);
	int t;
	cin>>t;
	//char a[]="codeforces";
	while(t--){
		ll n,i,j,s=0,s2=0,z=0;
		cin>>n;
		ll a[n];
		for(i=0;i<n;i++){
			cin>>a[i];
			if(a[i]==0){
				s++;
			}
			else{
				s2=max(s2,s);
				s=0;
			}
		}
		s2=max(s,s2);
		cout<<s2<<endl;
	}
	return 0;
}