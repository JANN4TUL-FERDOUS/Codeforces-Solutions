#include<bits/stdc++.h>
using namespace std;
int main(){
    int t;
    cin>>t;
    while(t--){
        string a,b;
        cin>>a>>b;
        int l1=a.length(),l2=b.length(),i,s=0,s1=0,s2=0;
        for(i=0;i<l1;i++){
            for(int j=0;j<l2;j++){
                if(a[i]==b[j]){
                    s1=0;s2=0;
                    for(int k=0;k+i<l1 && k+j<l2;k++){
                        if(a[i+k]!=b[j+k]) break;
                        else{
                            s1++;
                            if(s1>s2) s2=s1;
                        }
                    }
                }
                if(s2>s) s=s2;
            }
        }
        cout<<l1+l2-2*s<<endl;
    }
    return 0;
}