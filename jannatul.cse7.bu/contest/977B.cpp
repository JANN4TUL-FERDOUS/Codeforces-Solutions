#include<iostream>
using namespace std;
int main(){
    int n,s=0;
    char x,y;
    string a;
    cin>>n>>a;
    for(int i=0;i<n-1;i++){
        int s1=0;
        for(int j=0;j<n-1;j++){
            if(a[i]==a[j] && a[i+1]==a[j+1]) s1++;
         }
         if(s1>s){
            s=s1;
            x=a[i];
            y=a[i+1];
        }
    }
    cout<<x<<y;
    return 0;
}