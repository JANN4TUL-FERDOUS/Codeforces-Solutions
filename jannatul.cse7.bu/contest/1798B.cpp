#include <bits/stdc++.h>
using namespace std;
#define ll long long
const int N=2e5+7;
//ll a[N],b[N];
int main() {
	ios::sync_with_stdio(0);
    cin.tie(0);
  	int t;
  	cin>>t;
  	while(t--){
  		vector<int>v,v2;
  		map<int,int>mm;
  		stack<int>st;
  		ll n,m,i,j,k,s=0,s2=0,z=0;
  		cin>>m;
  		for(k=0;k<m;k++){
  			cin>>n;
  			v.push_back(n);
  			int a[n];
  			for(i=0;i<n;i++){
  				cin>>a[i];
  				mm[a[i]]=1;
  				st.push(a[i]);
  			}
  		}
  		for(i=m-1;i>=0;i--){
  			j=v[i];s=0;
  			while(j--){
  				s2=st.top();
  				st.pop();
  				if(mm[s2]==1 && s==0){
  					s=1;v2.push_back(s2); 
				}
				mm[s2]=-1;
  			}
  		}
  		int l=v2.size();
  		if(l<m) cout<<"-1\n";
  		else{
  			for(i=l-1;i>=0;i--) cout<<v2[i]<<" ";
  			cout<<endl;
  		}
  		
	}
	return 0;
}