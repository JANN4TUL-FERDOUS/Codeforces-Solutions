#include<iostream>
using namespace std;
int main(){
    int t,n;
    cin>>t;
    while(t--){
        cin>>n;
        int a[n],s=0;
        for(int i=0;i<n;i++){
            cin>>a[i];
            if(a[i]!=2) s++;
        }
        cout<<s<<endl;
    }
    return 0;
}