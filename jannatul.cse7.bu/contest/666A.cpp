#include <bits/stdc++.h>
using namespace std;
#define ll long long
#define ff first
#define ss second
#define pb push_back

const int N=1e4+7;
ll mod=1e9+7;
double eps = 1e-9;
bitset<N>bt;
set<string>samp[N];

int main(){
	ios::sync_with_stdio(0);
    cin.tie(0);
    string a;
    cin>>a;
    set<string>ans;
    ll i,k,j,s=0,z=0;
    ll len=a.length();
    for(i=len-1;i>4;i--){
    	string str;
    	str+=a[i];
    	for(j=i-1;j>=i-2 && j>4;j--){
    		str=a[j]+str;
    		//cout<<str<<" ";
    		if((samp[i+1].size()==1 && !samp[i+1].count(str))|| samp[i+1].size()>1 || i+1>=len){
    			ans.insert(str);
    			samp[j].insert(str);
    		}
    	}
    }
    cout<<ans.size()<<"\n";
    for(auto i:ans){
    	cout<<i<<"\n";
    }
    return 0;
}