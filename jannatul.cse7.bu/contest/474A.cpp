#include<bits/stdc++.h>
using namespace std;
int main(){
    char a[]="qwertyuiopasdfghjkl;zxcvbnm,./";
    char b[105],c;
    int i,j;
    cin>>c>>b;
    if(c=='R'){
        for(i=0;i<strlen(b);i++){
            for(j=0;j<32;j++){
                if(b[i]==a[j]) {
                    b[i]=a[j-1];
                    cout<<b[i];
                    break;
                }

            }
        }
    }
    else{
        for(i=0;i<strlen(b);i++){
            for(j=0;j<32;j++){
                if(b[i]==a[j]) {
                    b[i]=a[j+1];
                    cout<<b[i];
                    break;
                }
            }
        }
    }
    return 0;
}