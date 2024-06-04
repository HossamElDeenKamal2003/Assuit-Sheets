#include <iostream>
#include <bits/stdc++.h>
using namespace std;

int main()
{
    int n;
    cin>>n;
    long long arr[n];
    for (int i=0;i<n;i++)
    {
        cin>>arr[i];
    }
    for (int i=0;i<n;i++)
    {
        sort(arr,arr+n);
    }
    int mini=arr[0];
    int ctr=0;
    for (int i=0;i<n;i++)
    {
        if (arr[0]==arr[i])
            ctr++;
    }
    if (ctr%2==0)
        cout<<"Unlucky"<<endl;
    else
        cout<<"Lucky"<<endl;
    return 0;
}
