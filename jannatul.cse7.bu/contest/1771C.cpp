#include <bits/stdc++.h>
using namespace std;
vector<int>p;
bool nop[32000];

int main() {
    ios::sync_with_stdio(false);
    cin.tie(NULL);
    int t,i,j;
    cin>>t;
    for(i=2;i<32000;i++){
    	if(!nop[i]){
    		p.push_back(i);
    		for(j=i*i;j<32000;j+=i) nop[j]=true;
    	}
    }
    while(t--){
    	int n;
    	bool s=false;
    	long long a;
    	cin>>n;
    	map<long long,int>m;
    	vector<int>ex;
    	int l=p.size();
    	//cout<<l<<endl;
    	for(i=0;i<n;i++){
    		cin>>a;
    		for(j=0;j<l&& p[j]<=a && s==false;j++){
    			if(a%p[j]==0){
    				if(++m[j]>=2){ s=true;break;}
    				while(a%p[j]==0) a/=p[j];
    				//cout<<j<<" "<<m[j]<<endl;
    			}    			
    		}
    		if(a>1) {
    			//m[a]++;
    			if(++m[a]>=2) s=true;
    		}
    	}
    	if(s==true) cout<<"YES\n";
		else cout<<"NO\n";
    	
	}
    return 0;
}