#include <bits/stdc++.h>

using namespace std;

int main()
{
    string str;
    cin>>str;
    int st=str.size();
    for(int i=0;i<st/2;i++){
        if (str[i]!=str[st-i-1])
        {
            cout<<"NO"<<endl;
            return 0;
        }
    }
    cout<<"YES"<<endl;
}
