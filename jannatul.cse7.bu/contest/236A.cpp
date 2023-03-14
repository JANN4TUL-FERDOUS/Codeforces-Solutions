#include<bits/stdc++.h>
using namespace std;
int main(){
    char s[100];
    int a=0;
    cin >> s;
    int l=strlen(s);
    sort(s,s+l);
    for(int i=0;i<l;i++){
            if(s[i]!=s[i+1]){
            a++;
            }
    }
    if(a%2==0) cout <<"CHAT WITH HER!\n";
    else  cout <<"IGNORE HIM!\n";
    return 0;
}