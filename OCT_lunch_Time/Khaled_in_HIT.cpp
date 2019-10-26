#include<bits/stdc++.h>
using namespace std;
#define ll long long 
int main()
{
    int t;
    cin>>t;
    while(t--)
    {
        int n;
        cin>>n;
        int arr[n];
        int hash[101]={0};
        for(int i=0;i<n;i++)
         {
             cin>>arr[i];
             hash[arr[i]]++;
         }
        int flag=0;
         int count=0;
        for(int i=0;i<=100;i++)
          {
            
            if(hash[i]>(n/4))
            {
                flag=1;break;
            }
          }
        if(flag==1)
          cout<<"-1";
        else
        {
            sort(arr,arr+n);
            int p=(n/4);
            int res[3];
            int j=0;
            for(int i=1;i<n;i++)
            {
                if(i%p==0)
                {
                    res[j++]=arr[i];
                    if(arr[i]==arr[i-1])
                       {
                           flag=1;break;
                       }
                }
            }
            if(flag)
            cout<<"-1";
            else
            for(int i=0;i<3;i++)
            cout<<res[i]<<" ";
        }
        if(t>0)
        cout<<endl;
    }
}
