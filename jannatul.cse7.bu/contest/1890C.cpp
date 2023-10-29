#include <bits/stdc++.h>
using namespace std;
#define ll long long
#define ff first
#define ss second
#define pb push_back
 
const int N=3e5+7;
ll mod=1e9+7;
ll ax[8]={0,0,-1,+1,-1,-1,1,1};
ll ay[8]={-1,1,0,0,-1,1,-1,1};
ll kx[8]={2,2,-2,-2,1,1,-1,-1};
ll ky[8]={1,-1,1,-1,2,-2,2,-2};

int main(){
	ios::sync_with_stdio(0);
    cin.tie(0);
    ll t=1;
    cin>>t;
    ll tt=t;
    while(t--){
		//cout<<"Case "<<tt-t<<": ";
		ll n,m,k,i,j=0,s=0,s2=0;
		cin>>n;
		string a;
		cin>>a;
		if(n%2){cout<<"-1\n";continue;}
		deque<char>st;
		for(i=0;i<n;i++) st.pb(a[i]);
		j=0,k=0;
		ll z=0;
		vector<ll>v;
		ll temp=0;
		while(!st.empty()  && k<300){
			if(st.front()!=st.back()){
				temp++;
				st.pop_back();
				st.pop_front();
			}
			else{
				k++;
				if(st.front()=='1'){
					st.pop_back();
					st.push_front('1');
					v.pb(temp);
					temp++;
				}
				else {
					v.pb(st.size()+temp);
					st.pb('0');
					st.pop_front();
					temp++;
				}
				
			}
		}
		if(st.empty()) {
			ll sz=v.size();
			cout<<sz<<"\n";
			for(i=0;i<sz;i++) cout<<v[i]<<" ";
			cout<<"\n";
		}
		else cout<<"-1\n";
	}
	return 0;
}