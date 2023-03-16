#include<bits/stdc++.h>
using namespace std;
int main(){
    int t;
    cin>>t;
    while(t--){
        string a;
        cin>>a;
        int s=0,i,l=a.length(),j=0,s1=0;
        char b[l];
        for(i=0;i<l;i++){
            if(a[i]=='A') s++;
            else{
                if(s>0) s--;
                else s++;
            }
        }
        cout<<s+s1<<endl;
    }
    return 0;
}