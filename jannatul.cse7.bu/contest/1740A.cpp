#include <bits/stdc++.h>
using namespace std;
#define MAXN   500005
int spf[MAXN];
void sieve(){
    spf[1] = 1;
    for (int i=2; i<MAXN; i++)
        spf[i] = i;
    for (int i=4; i<MAXN; i+=2)
        spf[i] = 2;
 
    for (int i=3; i*i<MAXN; i++){
        if (spf[i] == i){
            for (int j=i*i; j<MAXN; j+=i)
                if (spf[j]==j)
                    spf[j] = i;
        }
    }
}

int main() {
	int t;
	cin>>t;
	sieve();
	while(t--){
	    int a,b,i;
	    cin>>a;
	    for(i=a+1; ;i++){
	    	if(spf[i]!=i && (spf[i-a]==i-a && i-a>1)){
	    		cout<<i-a<<endl;
	    		break;
	    	}
	    }
	}
	return 0;
}