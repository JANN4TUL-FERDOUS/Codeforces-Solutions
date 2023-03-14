#include<bits/stdc++.h>
using namespace std;
int main(){
    int t;
    cin>>t;
    while(t--){
        string x;
        cin>>x;
        int a=0,b=0,c=0,l=x.length();
        for(int i=0;i<l;i++){
            if(x[i]=='A') a++;
            else if(x[i]=='B') b++;
            else c++;
        }
        if(a==b+c ||b==a+c || c==a+b){
            char y;
            if(a==b+c) y='A';
            else if(b==a+c) y='B';
            else y='C';
            if(x[0]!=x[l-1] && (x[0]==y || x[l-1]==y)){
                int s=0,s1=0,s2=0;
                for(int i=0;i<l;i++){
                    if(x[i]==y) s1++;
                    else s2++;
                    if(x[0]==y && s2>s1){
                        s=1;
                        break;
                    }
                    else if(x[l-1]==y && s1>s2){
                        s=1;
                        break;
                    }
                }
                if(s==1) cout<<"NO\n";
                else cout<<"YES\n";
            }
            else cout<<"NO\n";
        }
        else cout<<"NO\n";
   }
    return 0;
}