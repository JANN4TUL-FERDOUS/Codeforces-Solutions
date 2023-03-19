#include <bits/stdc++.h>
using namespace std;
#define ll long long
const int N=2e5+7;
//string a,b;
int main() {
	ios::sync_with_stdio(0);
    cin.tie(0);
  	int t;
  	cin>>t;
  	while(t--){
  		ll a,b,c,d,s=0,s2=0;
  		cin>>a>>b>>c>>d;
  		if(d>=b){
  			if(b>=0) s=d-b;
  			else if(d<=0) s=abs(b-d);
  			else s=abs(b)+abs(d);
  			a+=s;
  			if(c<=a){
  				if(c>=0) s+=a-c;
  				else if(a<=0) s+=abs(c-a);
  				else s+=abs(a)+abs(c);
  				cout<<s<<"\n";
  			}
  			else cout<<"-1\n";
  			//cout<<s<<" "<<a<<" "<<b<<" "<<c<<" "<<d<<endl;
  		}
  		else cout<<"-1\n";
  	}
	return 0;
}