#include<iostream>
using namespace std;
int main(){
    int n=8,s1=0,s2=0;
    while(n--){
        string a;
        cin>>a;
        for(int i=0;i<a.length();i++){
            if(a[i]=='Q')s1+=9;
            else if(a[i]=='q') s2+=9;
            else if(a[i]=='R') s1+=5;
            else if(a[i]=='r') s2+=5;
            else if(a[i]=='B' || a[i]=='N') s1+=3;
            else if(a[i]=='b'|| a[i]=='n') s2+=3;
            else if(a[i]=='P') s1++;
            else if(a[i]=='p') s2++;

        }
    }
    if(s1>s2) cout<<"White\n";
    else if(s1<s2) cout<<"Black\n";
    else cout<<"Draw\n";
    return 0;
}