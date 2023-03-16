#include<iostream>
using namespace std;
int main(){
    int t,n;
    cin>>t;
    while(t--){
        cin>>n;
        int i,c[26]={0},s=0;
        for(int l=0;l<n;l++){
            string a;
            cin>>a;
            for(i=0;i<a.length();i++){
                c[a[i]-'a']++;

            }
        }
        for(i=0;i<26;i++){
            if(c[i]%n!=0) {
                s=1;
                break;
            }
        }
        if(s==1) cout<<"NO\n";
        else cout<<"YES\n";
    }
    return 0;
}