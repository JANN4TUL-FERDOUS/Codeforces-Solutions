#include<iostream>
using namespace std;
int main(){
    int t;
    cin>>t;
    while(t--){
        int n,s=0,x=0;
        cin>>n;
        string a;
        cin>>a;
        for(int i=0;i<n;i++){
            if(a[i]=='(') s++;
            else s--;
            if(s<0){
                x++;
                s=0;
            }
        }
        cout<<x<<endl;
    }
    return 0;
}