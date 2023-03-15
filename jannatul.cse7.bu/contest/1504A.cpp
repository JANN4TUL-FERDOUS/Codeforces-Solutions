#include<iostream>
using namespace std;
int main(){
    int t,i;
    cin>>t;
    while(t--){
        int s=0,x=0;
        string a;
        cin>>a;
        int l=a.length();
        for(i=0;i<l;i++){
            if(a[i]=='a') x++;
        }
        if(x==l) cout<<"NO\n";
        else {
            cout<<"YES\n";
            for(i=l-1;i>=0;i--){
                if(a[i]!='a' && s==0){
                    cout<<"a";
                    s=1;
                }
                cout<<a[l-1-i];
            }
            cout<<endl;
        }
    }
    return 0;
}