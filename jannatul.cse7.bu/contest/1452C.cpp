#include<iostream>
using namespace std;
int main(){
    int t;
    cin>>t;
    while(t--){
        string a;
        cin>>a;
        int s1=0,s2=0,s=0;
        for(int i=0;i<a.length();i++){
            if(a[i]=='(') s1++;
            else if(a[i]=='[') s2++;
            else if(a[i]==')' && s1>0) {
                s++;
                s1--;
            }
            else if(a[i]==']' && s2>0){
                s++;
                s2--;
            }
        }
        cout<<s<<endl;
    }
    return 0;
}