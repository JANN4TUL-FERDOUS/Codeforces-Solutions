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
		string a;
		cin>>a;
		ll b[n]={0};
		x=n;
		for(i=0;i<n;i++){
			if(a[i]=='(') s++;
			else s--;
			if(s>0) z=1;
			else if(s<0) z2=1;
			//cout<<a[i]<<" "<<s<<endl;
			
		}
		if(s!=0) {cout<<"-1\n";continue;}
		if(z==0 || z2==0) {
			cout<<"1\n";
			for(i=0;i<n;i++) cout<<"1 ";
			cout<<"\n";
		}
		else{
			cout<<"2\n";
			s=0;
			for(i=0;i<n;i++){
				if(s==0){
					if(a[i]=='(') {s++;cout<<"1 ";}
					else {s--;cout<<"2 ";}
				}
				else{
					if(s>=0) cout<<"1 ";
					else cout<<"2 ";
					if(a[i]==')') s--;
					else s++;
				}
			}
			cout<<"\n";
		}
	 }
	 return 0;
 }