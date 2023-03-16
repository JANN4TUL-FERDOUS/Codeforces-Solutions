#include<iostream>
using namespace std;
int main(){
    int i,s=1,s1=1;
    string a;
    cin>>a;
    for(i=1;i<a.length();i++){
        if(a[i]==a[i-1]){
            s1++;
            if(s1>5){
                s1=1;
                s++;
            }
        }
        else {
            s++;
            s1=1;
        }
    }
    cout<<s<<endl;
    return 0;
}