#include <bits/stdc++.h>
using namespace std;
#define ll long long
const int N=3e5+7;
int main() {
	ios::sync_with_stdio(0);
    cin.tie(0);
	int t;
	cin>>t;
	char a[]="codeforces";
	while(t--){
		ll n,i,j,s=0,s2=0,z=0;
		string b;
		
		cin>>b;
		for(i=0;i<10;i++){
			//cout<<a[i]<<" "<<b[i]<<endl;
			if(a[i]!=b[i]) s++;
		}
		cout<<s<<endl;
	}
	return 0;
}