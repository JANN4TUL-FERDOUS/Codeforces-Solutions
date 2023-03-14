#include <bits/stdc++.h>
using namespace std;

int main() {
    ios::sync_with_stdio(false);
    cin.tie(NULL);
    int t;
    cin>>t;
    while(t--){
    	long long a,b,c,d,x,y,i,s,j;
	    int z=0;
	    cin>>a>>b>>c>>d;
		s=a*b;
		for(i=a+1;i<=c;i++){
			j=s/__gcd(s,i);
			if(d-d%j>b) {
				z=1;
				x=i;y=d-d%j;break;
			}
		}
		if(z==1) cout<<x<<" "<<y<<endl;
		else cout<<"-1 -1\n";
	}
    return 0;
}