#include <bits/stdc++.h>
using namespace std;
#define ll long long
const int N=2e5+7;
ll b[N],a[N];
int main() {
	ios::sync_with_stdio(0);
    cin.tie(0);
  	int t;
  	cin>>t;
  	while(t--){
  		ll n,i,j,k,s=0,s2=0;
  		cin>>n;
  		for(i=0;i<n;i++){
  			cin>>a[i]>>b[i];
  			a[i]*=b[i];
		}
		ll gd,lm;
		s=1;
		for(i=0;i<n;i++){
			if(i==0){gd=a[i];lm=b[i];}
			else{
				gd=__gcd(gd,a[i]);
				lm=((lm*b[i])/__gcd(lm,b[i]));
				//cout<<lm<<" ";
			}
			if(a[i]%lm || gd%lm) {
				s++;
				gd=a[i];
				lm=b[i];
			}
		}
		cout<<s<<"\n";		
  		
	}
	return 0;
}