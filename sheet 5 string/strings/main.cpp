#include <iostream>

using namespace std;

int main()
{
    string st1,st2;
    cin>>st1>>st2;
    char x=st1[0],y=st2[0];
    cout<<st1.length()<<" "<<st2.length()<<endl;
    cout<<st1<<st2<<endl;
    char  temp = st1[0];
	st1[0]=st2[0];
	st2[0] = temp;
	cout<<st1<<" "<<st2;
    return 0;
}
