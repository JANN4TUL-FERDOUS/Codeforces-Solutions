#include<bits/stdc++.h>
using namespace std;
int main(){
    string a;
    cin>>a;
    int l=a.length(),s=0,i;
    s=l/2;
    if(l%2==1){
        for(i=1;i<l;i++){
            if(a[i]=='1'){
                s++;
                break;
            }
        }
    }
    cout<<s<<endl;
    return 0;
}