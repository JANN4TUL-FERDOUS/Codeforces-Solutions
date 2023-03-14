#include<bits/stdc++.h>
using namespace std;
const int nn=32000;
int a[nn];
vector<int>v;
void sieve(){
	for(int i=2;i<nn;i++){
		if(a[i]) continue;
		v.push_back(i);
		for(int j=i*i;j<nn;j+=i) a[j]=1;
	}
}
int main(){
    int t;
    cin>>t;
    int l=t;
    sieve();
    while(t--){
        long long n,i,s=0,s2=0;
        cin>>n;
        vector<pair<int,int>>v2;
        for(i=0;i<v.size() && v[i]*v[i]<=n;i++){
        	if(n%v[i]==0){
        		 s=0;
        		while(n%v[i]==0){
        			n/=v[i];
        			s++;
        		}
        		v2.push_back({v[i],s});
        	}
        }
        if(n>1) v2.push_back({n,1});
        while(1){
        	s=1;
        	for(i=0;i<v2.size();i++){
        		//cout<<v2[i].first<<" "<<v2[i].second<<endl;
        		if(v2[i].second>0){
        			s*=v2[i].first;
        			v2[i].second--;
        		}
        	}
        	if(s==1) break;
        	s2+=s;
        }
        cout<<s2<<endl;
  }	  
    return 0;
}