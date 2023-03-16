#include<iostream>
using namespace std;
int main(){
    int t;
    cin>>t;
    while(t--){
        int a;
        cin>>a;
        int l=a/4;
        if(a%4!=0) l++;
        for(int i=0;i<a-l;i++) cout<<"9";
        for(int i=0;i<l;i++) cout<<"8";
        cout<<endl;
    }
    return 0;
}