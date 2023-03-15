#include<bits/stdc++.h>
using namespace std;
int main(){
    long long s=0,i,s1=0,l;
    string a;
    cin>>a;
    l=a.length();
    if(l<2) cout<<"0\n";
    else{
        s1=1;
        for(i=0;i<l;i++) s+=a[i]-'0';
        while(s>9){
            s1++;
            long long temp=0;
            while(s>0){
                temp+=s%10;
                s/=10;
            }
            s=temp;
        }
        cout<<s1<<endl;
    }
    return 0;
}