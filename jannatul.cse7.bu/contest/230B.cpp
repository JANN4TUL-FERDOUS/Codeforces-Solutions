#include<bits/stdc++.h>
using namespace std;
int main(){
    int n;
    scanf("%d",&n);
    long long a[n],s=0,i,j,y;
    for(i=0;i<n;i++){
        int x=0;
        cin>>a[i];
        if(a[i]<4) printf("NO\n");
        else if(a[i]==4) printf("YES\n");
        else if(a[i]%2==1){
            s=sqrt(a[i]);
            if(s*s==a[i]){
                y=sqrt(s);
                for(j=3;j<=y;j+=2){
                    if(s%j==0){
                        x=1;
                        break;
                    }
                }
                if(x==1) printf("NO\n");
                else printf("YES\n");
            }
            else printf("NO\n");
        }
        else printf("NO\n");
    }
    return 0;
}