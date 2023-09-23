#include <bits/stdc++.h>
using namespace std;
#define ll long long
const int N=1e5+7;
ll a[N],n,m,ans=0;

int main() {
	ios::sync_with_stdio(0);
    cin.tie(0);
	ll t;
	cin>>t;
	ll tt=t;
	while(t--){
		//cout<<"Case "<<tt-t<<": ";
		ll i,j=-1,s=1,s2=0,k;
		//cin>>n;
		//char a[10][10];
		ll mp[11]={0};
		string a[11];
		for(i=1;i<=10;i++){
			cin>>a[i];
			for(j=0;j<10;j++){
				//cin>>a[i][j];
				if(a[i][j]=='X') {
					ll x=i,y=j+1;
					if(x>5) x=10-x+1;
					if(y>5) y=10-y+1;
					//cout<<x<<" "<<y<<" "<<i<<" "<<j<<endl;
					mp[min(x,y)]++;
				}
			}
		}
		s=0;
		for(i=1;i<=5;i++){
			s+=mp[i]*i;
		}
		cout<<s<<"\n";
	}
	return 0;
}