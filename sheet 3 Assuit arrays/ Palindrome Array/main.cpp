#include <iostream>

using namespace std;

int main()
{
    int n;
    cin>>n;
    int x[n];
    int y[n];
    for(int i=0;i<n;i++)
    {
        cin>>x[i];
    }
    for(int j=n-1;j>=0;j--)
    {
        int y=x[j];
    }
    if(x[n]==y[n])
        cout<<"YES";
    else
        cout<<"NO";

    return 0;
}
