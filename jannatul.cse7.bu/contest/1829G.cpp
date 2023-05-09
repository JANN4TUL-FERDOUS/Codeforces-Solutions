#include <bits/stdc++.h>
using namespace std;
#define ll long long
const int N=1e6+500;
ll a[N],b[N];
bitset<N>bt;
int main() {
	ios::sync_with_stdio(0);
    cin.tie(0);
	int t;
	cin>>t;
	ll n,i,j=1,k=1,z=1,s3=0,s=1,s2=0;
	s=1;
	for(i=1;;i++){
		s=i;
		s2=0;
		for(j=z;j<N;j+=s){
			a[j]=j*j+a[j-s+1]; 
			s2+=a[j];
			b[j]=s2;
			s++;
			// cout<<j<<" "<<i<<" "<<s<<" "<<a[j]<<" "<<b[j]<<endl;
		}
		//cout<<j<<" "<<b[j-s]<<" "<<j-s<<endl;
		z+=k;k++;
		if(z>N) break;
	}
	//cout<<b[5]<<" "<<b[9]<<" "<<b[10]<<endl;
	while(t--){
		//cout<<b[5]<<" "<<b[9]<<" "<<b[10]<<endl;
		cin>>n;
		cout<<b[n]<<"\n";
		
	}
	return 0;
}