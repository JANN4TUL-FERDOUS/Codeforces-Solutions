#include<bits/stdc++.h>
using namespace std;
int main(){
    int t,n,m,x,y;
    cin>>t;
    while(t--){
        cin>>n>>m>>x>>y;
        int s1=0,s2=0;
        char c;
        int a[1000],k=0;
        for(int i=0;i<n;i++){
            s1=0;
            for(int j=0;j<m;j++){
                cin>>c;
                if(c=='.') s1++;
                else{
                    if(s1>0){
                        if(2*x>y){
                            if(s1%2!=0) s2+=x;
                                s2+=(s1/2)*y;
                        }
                        else s2+=s1*x;
                    }
                    s1=0;
                }
            }
            if(s1>0){
                if(2*x>y){
                    if(s1%2!=0) s2+=x;
                    s2+=(s1/2)*y;
                }
                else s2+=s1*x;
            }
        }
        cout<<s2<<endl;
    }
    return 0;
}