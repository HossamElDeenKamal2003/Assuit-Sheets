#include <iostream>

using namespace std;

int main()
{
    int t;
    cin>>t;
    string str;
    for(int i=0;i<t;i++){
            cin>>str;
    int si=str.length();
        if (str.length()>10){
        cout<<str[0]<<si-2<<str[si-1]<<endl;
    }
    else
        cout<<str<<endl;
    }
    return 0;
}
