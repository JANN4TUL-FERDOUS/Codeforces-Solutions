 #include<bits/stdc++.h>
using namespace std;
int main(){
    int t;
    cin>>t;
    while(t--){
        int n,i,j,s=0,s2=0,s3=1,k=0,a,b;
        cin>>n>>a>>b;
        int x[n];
        x[0]=a,x[n-1]=b;
        s2=n;
        for(i=1;i<n/2;i++){
            if(s2==a) s2--;
            if(s2==b) s2--;
            if(s2==a) s2--;
            x[i]=s2;
            s2--;
        }
        for(i=n/2;i<n-1;i++){
            if(s3==a) s3++;
            if(s3==b) s3++;
            if(s3==a) s3++;
            x[i]=s3;
            s3++;
        }
        for(i=0;i<n;i++){
            //cout<<x[i]<<" ";
            if(i<n/2 && x[i]<a){
                s=1;
                break;
            }
            else if(i>=n/2 && x[i]>b){
                s=1;
                break;
            }
        }
        if(s==1) cout<<"-1\n";
        else {
            for(i=0;i<n;i++) cout<<x[i]<<" ";
            cout<<endl;
        }
    }
     return 0;
 }