#include <iostream>

using namespace std;

int main()
{
    int t;
    cin>>t;
    int ctr=0;
    string str;
    cin>>str;
    char ch;
    for (int i=0;i<t;i++){
        if (i==0){
              ch=str[i];
              ctr++;
        }
        else
        {
            if (str[i]!=ch){
                ctr++;
                ch=str[i];
            }

        }
        }
cout<<ctr;
    return 0;
}
