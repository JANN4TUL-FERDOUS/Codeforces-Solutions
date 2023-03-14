#include<iostream>
using namespace std;
int main(){
    int t,n;
    cin>>t;
    while(t--){
        cin>>n;
        int i,s1=0,s2=0,b[n],j=0;
        string a;
        cin>>a;
        for(i=0;i<n;i++){
            if(a[i]=='A')
                b[j++]=i;
        }
        if(j==0) cout<<"0\n";
        else{
            for(i=n-1;i>=0;i--){
                if(a[i]=='A') break;
                else s2++;
            }
            for(i=1;i<j;i++){
                s1=b[i]-b[i-1]-1;
                if(s1>s2){
                    s2=s1;
                }
            }
            cout<<s2<<endl;
        }
    }
    return 0;
}