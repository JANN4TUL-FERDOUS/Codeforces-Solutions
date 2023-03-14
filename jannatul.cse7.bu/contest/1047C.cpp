#include<bits/stdc++.h>
using namespace std;
const int nn=2e7+5;
int a[nn];
vector<pair<int,int>>v;
map<int,pair<int,int>>p;
vector<int>v2;
void seive(){
	int i,j;
	a[1]=1;
	for(i=2;i<nn;i++) a[i]=i;
	for(i=2;i*i<nn;i++){
		if(a[i]==i){
			for(j=i*i;j<nn;j+=i) a[j]=min(i,a[j]);
		}
	}
}
int main(){
	ios::sync_with_stdio(false);
    cin.tie(NULL);
    int n;
	cin>>n;
	int i,j,z;
	int b[n],gcd=0;
	seive();
	map<int,int>m;
	for(i=0;i<n;i++){
		cin>>b[i];
		if(i==0) gcd=b[0];
		else gcd=__gcd(gcd,b[i]);
	}
	for(i=0;i<n;i++){
		z=b[i]/gcd;
		int s=0;
		while(z!=a[z]){
			m[a[z]]++;
			s=a[z];
			if(m[a[z]]==1){
				v2.push_back(a[z]);
			}
			while(z%s==0)z/=s;				
		}
		if(z>1){
			m[z]++;
			if(m[z]==1)v2.push_back(z);
		}	
	}
	int l=v2.size();
	if(l==0) cout<<"-1\n";
	else {
		for(i=0;i<(int)v2.size();i++){
			v.push_back({m[v2[i]],v2[i]});
		}
		sort(v.begin(),v.end());
		l=v.size();
		if(v[l-1].second==1) cout<<"-1"; 
		else cout<<n-v[l-1].first<<"\n";
	}
	return 0;
}