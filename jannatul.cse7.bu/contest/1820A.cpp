#include <bits/stdc++.h>
using namespace std;
#define ll long long
const int N=3e5+7;
//ll a[N];
//int a[4]={-1,1,0,0};
//int b[4]={0,0,-1,+1};
int main() {
	ios::sync_with_stdio(0);
    cin.tie(0);
	int t;
	cin>>t;
	while(t--){
		int n,i,j,s=0,s2=0,z=0;
		string a;
		cin>>a;
		int l=a.length();
		if(a[l-1]!='^') s++;
		for(i=l-1;i>=0;i--){
			//cout<<a[i]<<" "<<s<<endl;
			if(a[i]=='_' && (i==0 || a[i-1]!='^')) s++;
		}
		if(l==1 && a[0]=='^') s++;
		cout<<s<<endl;
	}
	return 0;
}