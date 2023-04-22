#include <bits/stdc++.h>
using namespace std;
#define ll long long
const int N=1e7+7;
const ll mod=1e9+7;
ll a[N],b[N];
int main() {
	ios::sync_with_stdio(0);
    cin.tie(0);
	int t,i,j;
	cin>>t;
	while(t--){
		string a;
		cin>>a;
		int l=a.length(),s=0,s2=0,i,j;
		if(a[0]=='0') cout<<"0\n";
		else{
			if(a[0]=='?') s=9;
			else s=1;
			for(i=1;i<l;i++){
				if(a[i]=='?') s*=10;
			}
			cout<<s<<"\n";
		}
	}
	return 0;
}