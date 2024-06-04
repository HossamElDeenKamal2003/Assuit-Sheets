#include <iostream>

using namespace std;

int main()
{
    int n;
    cin>>n;
    int arr[n];
    int ctr=0;
    for(int i=0;i<n;i++)
    {
        cin>>arr[i];
    for(int j=1;j<=n;j++)
    {
    int minn=arr[0];
    if (arr[j]<arr[0])
        arr[0]=arr[j];

    }

    }
    for (int i=0;i<n;i++)
        {
       if (arr[j]=arr[0])
            ctr++;

        }
   if (ctr%2==0)
        cout<<"Lucky"<<endl;
    else
        cout<<"Unlucky"<<endl;



    return 0;
}
