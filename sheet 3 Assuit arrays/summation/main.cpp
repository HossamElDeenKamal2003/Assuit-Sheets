#include <iostream>

using namespace std;

int main()
{
    int n;
    cin>>n;
    long long x[n];
    long long sum=0;
    for (int i=0;i<=n-1;i++)
    {
        cin>>x[i];


        sum+=x[i];


    }
      cout <<abs(sum);


    return 0;
}
