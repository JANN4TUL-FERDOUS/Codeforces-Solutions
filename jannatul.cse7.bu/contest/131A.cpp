#include<bits/stdc++.h>
using namespace std;
int main(){
    char s[10000];
    int a=0;
    cin >> s;
    for(int i=1;i<strlen(s);i++){
        if(s[i]<91) a++;
    }
    if(a==strlen(s)-1){
        for(int i=0;i<strlen(s);i++){
            if(s[i]>90) s[i]=s[i]-32;
            else s[i]=s[i]+32;
        }
    }
    cout << s<<endl;
    return 0;
}