#include<bits/stdc++.h>
using namespace std;
int main(){
    string a,b;
    cin>>a>>b;
    int s=0;
    for(int i=0;i<b.length();i++){
        if(b[i]==a[s]){
            s++;
        }
    }
    cout<<s+1<<endl;
    return 0;
}