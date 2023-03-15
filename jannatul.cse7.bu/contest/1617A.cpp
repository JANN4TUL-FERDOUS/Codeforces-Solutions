#include<bits/stdc++.h>
using namespace std;
int main(){
    int t;
    cin>>t;
    while(t--){
        int n,i,j,x[26]={0};
        string a,b;
        cin>>a>>b;
        char c=0;
        for(i=0;i<a.length();i++){
            int s=a[i]-0;
            x[s-97]++;
        }
        sort(a.begin(),a.end());
        if(b!="abc" || x[0]==0 || x[1]==0 || x[2]==0) cout<<a;
        else{
            for(i=0;i<26;i++){
                if(b[1]=='b' && (i==1 || i==2)){
                    while(i==1 && x[2]--) cout<<'c';
                    while(i==2 && x[1]--) cout<<'b';
                }
                else{
                    while(x[i]--){
                        c='a'+i;
                        cout<<c;
                    }
                }
            }
        }
        cout<<endl;
    }
    return 0;
}