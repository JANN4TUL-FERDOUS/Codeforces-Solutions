#include<bits/stdc++.h>
using namespace std;
int main(){
    int t;
    cin>>t;
    while(t--){
        int i,j,s=0,s1=0,s2=0,n,k;
        cin>>n>>k;
        s=(n+1)/2;
        if(k>s) cout<<"-1\n";
        else{
            for(i=0;i<n;i++){
                for(j=0;j<n;j++){
                    if(k>0 && (s1==i && s2==j)) {
                        cout<<"R";
                        k--;
                        s1+=2;
                        s2+=2;
                    }
                    else cout<<".";
                }
                cout<<endl;
            }
        }
    }
    return 0;
}