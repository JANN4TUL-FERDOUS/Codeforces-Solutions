#include<bits/stdc++.h>
using namespace std;
int main(){
    char a[1000],b[1000],c[1000];
    cin >> a>>b>>c;
    int i,j,s=0;
    strcat(a,b);
    sort(a,a+strlen(a));
    sort(c,c+strlen(c));
    if(strlen(a)!=strlen(c)) {
        cout<<"NO\n";
        return 0;
    }

    else{
        for(i=0;i<strlen(a);i++){

            if(a[i]==c[i])
                s++;

        }
        if(s==strlen(a)) cout<<"YES\n";
        else cout<<"NO\n";
    }
    return 0;
}