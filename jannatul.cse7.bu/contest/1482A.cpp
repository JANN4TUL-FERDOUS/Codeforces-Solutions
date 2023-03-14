#include<bits/stdc++.h>
using namespace std;
int main(){
    int t,i,j,l;
    cin>>t;
    while(t--){
        string a;
        cin>>a;
        int s1=0,s2=0,s3=0,s=0,l=a.length();
        if(l%2!=0 || a[0]==')' || a[l-1]=='(') cout<<"NO\n";
        else{
            for(i=0;i<l;i++){
                if(s==1) break;
                if(a[i]=='(' ) s1++;
                else if(a[i]==')'){
                    s2++;
                    if(s1+s3<s2) {
                        s=1;
                        break;
                    }
                }
                else s3++;
            }
            if(s==1) cout<<"NO\n";
            else{
                s1=abs(s1-s2);
                s3-=s1;
                if(s3%2==0) cout<<"YES\n";
                else cout<<"NO\n";
            }
        }
    }
    return 0;
}