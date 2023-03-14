#include<iostream>
using namespace std;
int main(){
    int n;
    cin>>n;
    int a[n];
    for(int i=0;i<n;i++) cin>>a[i];
    int i,s=0,s1=0,s2=0,s3=0;
    for(i=0;i<n;i++){
        if(s==1) break;
        if(a[i]==25) s1++;
        else if(a[i]==50){
            if(s1<1){
                s=1;
            }
            else{
                s2++;
                s1--;
            }
        }
        else if(a[i]==100){
            if(s2>=1 && s1>0) {
                s2--;
                s1--;
            }
            else if(s1>=3)
                s1-=3;
            else s=1;
        }
    }
    if(s==0) cout<<"YES\n";
    else cout<<"NO\n";
    return 0;
}