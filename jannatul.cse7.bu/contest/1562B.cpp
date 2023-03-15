#include<bits/stdc++.h>
using namespace std;
int main(){
    int t;
    cin>>t;
    while(t--){
        int k,s1=0,s2=0,x;
        string a;
        cin>>k>>a;
        long long l,r,s=0,i,j;
        for(i=0;i<a.length();i++){
            if((a[i]=='1') || (a[i]=='4') || (a[i]=='6') || (a[i]=='8') || (a[i]=='9')){
                s1=1;
                s2=a[i]-'0';
                break;
            }
        }
        if(s1==1) cout<<"1\n"<<s2<<endl;
        else{
            s2=0;
            cout<<"2\n";
            for(i=0;i<a.length();i++){
                if(s2==1) break;
                for(j=i+1;j<a.length();j++){
                    x=(a[i]-'0')*10+a[j]-'0';
                    if((x%2==0) || (x%3==0) || (x%5==0) || (x%7==0)){
                        cout<<x<<endl;
                        s2=1;
                        break;
                    }
                }
            }
        }
    }
    return 0;
}