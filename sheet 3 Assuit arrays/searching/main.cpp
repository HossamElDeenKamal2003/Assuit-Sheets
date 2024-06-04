#include <iostream>

using namespace std;

int main()
{
    int n;
    cin>>n;
    int x[n];
    int i=0;
    for (int i=0;i<n;i++)
    {
        cin>>x[i];
    }
    int t;
    cin>>t;
    bool f=0;
    for (int i=0;i<n;i++)
    {
        if (x[i]==t)
            {
                cout <<i<<endl;
                f=1;
                break;
            }

    }
    if (f==0)
        cout <<-1<<endl;
    return 0;
}
