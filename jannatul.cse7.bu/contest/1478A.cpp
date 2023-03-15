#include<iostream>
using namespace std;
int main(){
    int t,n;
    cin>>t;
    while(t--){
        cin>>n;
        int a[n];
        int s1=1,s2=0;
        for(int i=0;i<n;i++) cin>>a[i];
        for(int i=0;i<n-1;i++){
            if(a[i]==a[i+1]) s1++;
            else{
                if(s1>s2) s2=s1;
                s1=1;
            }
        }
        cout<<max(s1,s2)<<endl;
    }
    return 0;
}