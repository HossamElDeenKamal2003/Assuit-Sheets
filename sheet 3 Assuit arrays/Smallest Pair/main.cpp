#include <bits/stdc++.h>

using namespace std;

int main()
{
    int t;
    cin>>t;
    int n;
    cin>>n;
    while(t--)
    {
    int arr[n+1];
    for(int i=1;i<=n;i++)
    {
        cin>>arr[i];
    }
    int minn=INT_MAX;
    for(int i=1;i<=n;i++)
    {

       for(int j=i+1;j<=n;j++)
       {
          minn=min(minn,(arr[i]+arr[j]+j-i));
       }

       }
       cout<<minn<<endl;
       }
    return 0;
}
