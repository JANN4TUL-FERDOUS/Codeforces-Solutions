#include <bits/stdc++.h>
using namespace std;
#define ll long long
const int N=3e5+7;
ll b[N],a[N];
int main() {
	ios::sync_with_stdio(0);
    cin.tie(0);
  	int t;
  	cin>>t;
  	while(t--){
  		ll n,i,j,k,s=0,s2=0,s3=0,z=0;
  		cin>>n;
  		vector<int>v;
  		s=n;
  		if(n%2==0) cout<<"-1\n";
  		else{
  			while(s>1){
  				//cout<<s<<" ";
  				if(((s-1)/2)%2==1) {
  					v.push_back(2);
  					s--;
  					s/=2;
  				}
  				else{
  					v.push_back(1);
  					s++;
  					s/=2;
  				}
  				//cout<<s<<" ";
			}
			cout<<v.size()<<"\n";
			for(i=(int)v.size()-1;i>=0;i--) cout<<v[i]<<" ";
			cout<<"\n";
  		}
	}
	return 0;
}