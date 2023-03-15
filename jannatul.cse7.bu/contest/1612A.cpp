#include<bits/stdc++.h>
using namespace std;
int main(){
    int t;
    cin>>t;
    while(t--){
        int x,y,x2,y2,i,j,s=0;
        cin>>x>>y;
        int d=(x+y)/2;
        if((x%2)!=y%2) cout<<"-1 -1\n";
        else{
            for(i=0;i<=x+y;i++){
               if(s==1) break;
                for(j=0;j<=x+y;j++){
                   if(i+j==d && abs(x-i)+abs(y-j)==d){
                        s=1;
                        cout<<i<<" "<<j<<endl;
                        break;
                    }
                }
            }
         }
     }
     return 0;
 }