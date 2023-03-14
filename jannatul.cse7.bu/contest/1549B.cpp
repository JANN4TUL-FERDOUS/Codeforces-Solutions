#include<bits/stdc++.h>
using namespace std;
int main(){
    int t;
    cin>>t;
    //int l=t;
    while(t--){
        //cout<<l-t<<" ";
        int n;
        cin>>n;
        string a,b;
        cin>>a>>b;
        int s=0,i;
        for(i=0;i<n;i++){
            if(b[i]=='1' && a[i]=='0') {
                s++;
                b[i]='0';
            }
            else{
               if(a[i]=='1'){
                    if(i>0 && b[i-1]=='1') {
                        s++;
                        b[i-1]='0';
                    }
                    else if(i<n-1 && b[i+1]=='1'){
                        b[i+1]='0';
                        s++;
                    }
               }
            }
        }
        cout<<s<<endl;
    }
    return 0;
}