#include<bits/stdc++.h>
using namespace std;
#define ll long long
vector<char>v,v2;
string a;
int main(){
	ios::sync_with_stdio(false);
    cin.tie(NULL);
    int t;
    cin>>t;
    while(t--){
    	map<char,int>m,mp;
    	int i,j,s=0,s2=0,z=0,zz=0,un=0;
    	cin>>a;
    	int l=a.length();
    	for(i=0;i<l;i++){
    		m[a[i]]++;
    		if(m[a[i]]==1) un++;
    	}
    	char d='a';
    	int x=0;
    	for(i=0;i<26;i++){
    		char c='a'+i;
    		s2=m[c];
    		if(s2==0) continue;
    		un--;
    		if(z==1){
    			while(s2--) v.push_back(c);
    		}
    		else{
    			s2/=2;
	    		while(s2--){
	    			v.push_back(c);
	    			v2.push_back(c);
	    		}
	    		if(m[c]%2==1) {
    				if(un>1){z=1;v2.push_back(c);}
    				else {
    					if(x==1){
    						x=0;
    						v.push_back(c);
    						v2.push_back(d);
    						z=1;
    					}
    					else {x=1;d=c;}
    				}
				}
				else if(m[c]%2==0 && x==1){v.push_back(d);x=0;}
	    	}
	    }
	    if(x==1) v2.push_back(d);
	    for(i=0;i<(int)v.size();i++) cout<<v[i];
	    for(i=v2.size()-1;i>=0;i--) cout<<v2[i];
	    cout<<endl;
	    v.clear();
	    v2.clear();
    	    	
    }
	return 0;
}