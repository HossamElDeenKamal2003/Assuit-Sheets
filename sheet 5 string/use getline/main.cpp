#include <iostream>

using namespace std;

int main()
{
    string line;
    getline(cin,line);
    //cout<<line;
    for(int i=0;i<line.size();i++)
    {
        if (line[i]=='\\')
            break;
        cout<<line[i];
    }

    return 0;
}
