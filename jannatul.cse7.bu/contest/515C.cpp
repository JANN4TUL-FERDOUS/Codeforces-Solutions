#include<bits/stdc++.h>
using namespace std;
int main(){
    int n,i,b[1000],j=0;
    string a;
    cin>>n>>a;
    for(i=0;i<n;i++){
        int s=a[i]-'0';
        if(s==0 || s==1) continue;
        else if(s%2 && s>1){
            if(s==9) {
                b[j++]=7;
                b[j++]=3;
                b[j++]=3;
                b[j++]=2;
            }
            else b[j++]=s;
        }
        else{
            if(s==2) b[j++]=2;
            else if(s==4){
                b[j++]=3;
                b[j++]=2;
                b[j++]=2;
            }
            else if(s==6){
                b[j++]=5;
                b[j++]=3;
            }
            else if(s==8){
                b[j++]=7;
                b[j++]=2;
                b[j++]=2;
                b[j++]=2;
            }
        }
    }sort(b,b+j);
    for(i=j-1;i>=0;i--) cout<<b[i];
    cout<<endl;
    return 0;
}