#include <iostream>

using namespace std;

int main()
{
    int t;
    cin>>t;
    while(t--){
        int num1,num2,num3;
        cin>>num1>>num2>>num3;
        if (num1+num2==num3)
            cout<<"yes"<<endl;
        else if (num2+num3==num1)
            cout<<"yes"<<endl;
        else if (num3+num1==num2)
            cout<<"yes"<<endl;
        else
            cout<<"no"<<endl;
    }
    return 0;
}
