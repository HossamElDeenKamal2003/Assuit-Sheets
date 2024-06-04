#include <bits/stdc++.h>

using namespace std;

int main()
{
    string str;
	int flag = 0;
	while(cin>>str){ // I love you
		reverse(str.begin(),str.end()); // I  evol uoy
		if(flag){
			cout<<" ";
		}
		flag = 1;
		cout<<str;
	}
    return 0;
}
