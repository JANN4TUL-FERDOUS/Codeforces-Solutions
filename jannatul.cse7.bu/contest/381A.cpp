#include<bits/stdc++.h>
using namespace std;
int main(){
    int n,i;
    cin>>n;
    int a[n],s1,s2,x=0,y=0;;
    for(int i=0;i<n;i++) cin>>a[i];
    int n1=n;
    i=0;s1=0;s2=n-1;;
    while(n1--){
        if(a[s1]>a[s2]){
            if(i%2==0) x+=a[s1];
            else y+=a[s1];
            s1++;
        }
        else{
            if(i%2==0) x+=a[s2];
            else y+=a[s2];
            s2--;
        }
        i++;
    }
    cout<<x<<" "<<y;
    return 0;
}