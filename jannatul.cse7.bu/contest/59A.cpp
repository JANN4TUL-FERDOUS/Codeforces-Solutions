#include<bits/stdc++.h>
using namespace std;
int main(){
    char a[102];
    int u=0,l=0;
    cin >> a;
    for(int i=0;i<strlen(a);i++){
        if(a[i]<91) u++;
        else l++;
    }
    if(u>l){
        for(int i=0;i<strlen(a);i++){
            if(a[i]>96) a[i]-=32;
        }
    }
    else if(u<=l){
        for(int i=0;i<strlen(a);i++){
            if(a[i]<91) a[i]+=32;
        }
    }
    cout << a;
    return 0;
}