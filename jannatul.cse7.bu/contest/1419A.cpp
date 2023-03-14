#include<iostream>
using namespace std;
int main(){
    int t;
    cin>>t;
    while(t--){
        int n,i,s1=0,s2=0,x;
        cin>>n;
        string a;
        cin>>a;
        for(i=0;i<n;i++){
            x=a[i]-'0';
            if(i%2==0 && x%2==1) s1++;
            else if(i%2==1 && x%2==0) s2++;
         }
         if(n%2==0){
            if(s2>0) cout<<"2\n";
            else cout<<"1\n";
         }
         else if(n%2!=0){
            if(s1>0) cout<<"1\n";
            else cout<<"2\n";
         }
    }
    return 0;
}