#include<bits/stdc++.h>
using namespace std;
int main(){
    int t;
    cin>>t;
    while(t--){
        string a;
        cin>>a;
        int s=0,i,x=-1,y=1,j=1,k=1,l=a.length();
        for(i=0;i<l;i++){
            if(a[i]=='a'){
                x=i;
                break;
            }
        }
        if(x==-1) cout<<"NO\n";
        else{
            while(y!=l){
                y++;
                a[x]++;
                if(x+k<l && a[x+k]==a[x]){
                    k++;
                    continue;
                }
                else if(x-j>=0 && a[x-j]==a[x]){
                    j++;
                    continue;
                }
                else {
                    s=1;
                    break;
                }
            }
            if(s==1) cout<<"NO\n";
            else cout<<"YES\n";
        }
    }
    return 0;
}