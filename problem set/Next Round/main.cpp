#include <iostream>
#define ll  long long
#define unll unsigned long long
#define unl  unsigned long
#define el endl
using namespace std;

int main()
{
    unll n,k,ctr=0,sum=0;
    cin>>n>>k;
    unll arr[n];
    k=arr[k-1];
    for(int i=0;i<n;i++){
        cin>>arr[i];
        if(arr[i]>=k&&arr[i]>0){
            ctr++;
        }
        //sum=sum+arr[i];
    }
    //if(sum==0){
      //  cout<<sum<<el;
        //return 0;
    //}

    cout<<ctr<<el;
    return 0;
}
