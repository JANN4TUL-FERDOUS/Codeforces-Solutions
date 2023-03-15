#include<iostream>
using namespace std;
int main(){
    int t,i;
    string a;
    cin>>t;
    while(t--){
        cin>>a;
        for(i=0;i<a.length();i++){
            if(i%2==0){
                if(a[i]=='a')cout<<"b";
                else cout<<"a";
            }
            else{
                if(a[i]=='z') cout<<"y";
                else cout<<"z";
            }
        }
        cout<<endl;
    }
    return 0;
}