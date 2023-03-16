#include<iostream>
using namespace std;
int main(){
    int n,i,s=0;
    string a;
    cin>>a>>n;
    int b[a.length()];
    b[0]=0;
    for(i=1;i<a.length();i++){
        if(a[i]==a[i-1]) s++;
        b[i]=s;
    }
    while(n--){
        int l,r;
        cin>>l>>r;
        cout<<b[r-1]-b[l-1]<<endl;
    }
    return 0;
}