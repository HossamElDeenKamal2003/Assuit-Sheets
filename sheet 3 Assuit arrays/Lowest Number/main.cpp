#include <bits/stdc++.h>

using namespace std;

int main()
{
    int n;
    cin>>n;
    long long A[n+1];
    for (int i=0;i<=n;i++)
    {
        cin>>A[i];

    }
    int low=A[1];
    int pos=1;
    for (int i=1;i<=n;i++)
    {
        if (A[i]<low)
        {
            low=A[i];
            pos=i;
        }

    }
    cout<<low<<" "<<pos<<endl;
    return 0;
}
