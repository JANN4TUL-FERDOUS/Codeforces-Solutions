#include<bits/stdc++.h>
using namespace std;
int main(){
    string a;
    int i=0,b=1;
    cin >>a;
    for(i=0;i<a.length();i++){
        if(a[i]=='W'&&a[i+1]=='U'&&a[i+2]=='B'){
            i+=2;
            if(b==0) cout<<" ";
            continue;
        }
        else {
            cout <<a[i];
            b=0;
        }

    }
    return 0;
}