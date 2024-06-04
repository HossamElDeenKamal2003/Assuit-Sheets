#include <iostream>
#include <cmath>
using namespace std;

int main()
{
   int n , m , a;
    cin>>n>>m>>a;
    int area=n*m;
    int flag=a*a;
    a = area/flag;
    cout <<(long long)ceil(m/a)*(long long) ceil(n/a);

    return 0;
}
