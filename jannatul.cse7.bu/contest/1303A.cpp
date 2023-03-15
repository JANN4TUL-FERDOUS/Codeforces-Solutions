#include<iostream>
using namespace std;
int main(){
    int t,i,j,k;
    string a;
    cin>>t;
    while(t--){
        j=0;
        k=0;
        int s=0;
        cin>>a;
        int l=a.length();
        for(i=0;i<l;i++){
            if(a[i]=='1'){
                j=i;
                break;
            }
        }
        for(i=l;i>=0;i--){
            if(a[i]=='1'){
                k=i;
                break;
            }
        }
        for(i=j;i<k;i++){
            if(a[i]=='0') s++;
        }
        cout<<s<<endl;
    }
    return 0;
}