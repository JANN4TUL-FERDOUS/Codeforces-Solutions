#include<bits/stdc++.h>
using namespace std;
int main()
{
      long long m,n,c=0,k=0,a=0,b=0,temp;
      int t;
      cin>>t;
      while(t--)
      {
          cin>>m>>n;
          if(n==1)
          {
              cout<<"NO"<<endl;
          }
          else
          {
              a=(m*n)*2;
              b=abs((n*2)-(n+1));
              c=(m*(n+1));
              k=(b*m);
              if((c+k)==a)
              {
                  cout<<"YES"<<endl;
                  cout<<c<<" "<<k<<" "<<a<<endl;

              }
              else
              {
                  cout<<"NO"<<endl;
              }

          }

      }
}