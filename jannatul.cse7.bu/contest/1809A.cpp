#include <bits/stdc++.h>
using namespace std;
#define ll long long
const int N=2e5+7;
//string a,b;
int main() {
	ios::sync_with_stdio(0);
    cin.tie(0);
  	int t;
  	cin>>t;
  	while(t--){
  		int i,j,n,s=0,s2=0;
  		//cin>>n;
  		string a;
  		cin>>a;
  		sort(a.begin(),a.end());
  		if(a[0]==a[3]) cout<<"-1\n";
  		else if(a[0]==a[2] || a[1]==a[3]) cout<<"6\n";
  		else cout<<"4\n";
	}
	return 0;
}