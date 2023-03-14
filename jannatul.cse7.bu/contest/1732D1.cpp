#include <bits/stdc++.h>
using namespace std;

int main() {
    ios::sync_with_stdio(false);
    cin.tie(NULL);
    int t;
    cin>>t;
    set<long long>s;
    map<long long,long long>m;
    s.insert(0);
    while(t--){
    	long long x,i;
    	char c;
    	cin>>c>>x;
    	if(c=='+') s.insert(x);
    	else{
    		while(s.find(m[x])!=s.end()) m[x]+=x;
    		cout<<m[x]<<endl;
		}
	}
    return 0;
}