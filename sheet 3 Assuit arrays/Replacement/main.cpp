#include <iostream>

using namespace std;

int main()
{
    int n;
    cin>>n;
    int x[n];
    int y[2]={1,2};
    for (int i=0;i<n;i++)
    {
        cin>>x[i];
         if (x[i]>0)
            x[i]=1;
        else if(x[i]<0)
            x[i]=2;
        else
            x[i]=0;
    }
    for (int i=0;i<n;i++)
        cout<<x[i]<<" ";


    return 0;
}
