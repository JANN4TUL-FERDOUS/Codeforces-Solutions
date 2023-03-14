#include<bits/stdc++.h>
using namespace std;
int main(){
   int n,i,j,a,b,x[1000],y[1000],c=0,d=0;
   cin >>n>>a;
   for(i=0;i<a;i++){
        cin>>x[i];
   }
   cin>> b;
   for(j=0;j<b;j++){
       cin>> y[j];
   }

    c=a+b;
    for(i=a,j=0;j<b;j++,i++){
        x[i]=y[j];
    }
    sort(x,x+c);
    for(i=0;i<c;i++){
        if(x[i]!=x[i+1])
            d++;
    }
   if(d==n)cout<<"I become the guy.\n";
   else cout<<"Oh, my keyboard!\n";
   return 0;
}