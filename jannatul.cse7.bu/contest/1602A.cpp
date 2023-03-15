#include<iostream>
using namespace std;
int main(){
    int t;
    cin>>t;
    while(t--){
        string a,b;
        cin>>a;
        int i,l=a.length(),s=0;
        char c=a[0];
        for(i=1;i<l;i++){
            if(a[i]<c) c=a[i];
        }
        cout<<c <<" ";
        for(i=0;i<l;i++){
            if(a[i]==c && s==0){
                s=1;
                continue;
            }
            cout<<a[i];
        }
        cout<<endl;
    }
    return 0;
}