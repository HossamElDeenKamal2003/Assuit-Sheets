#include<bits/stdc++.h>
using namespace std;
int main()
{
	string str;
	cin>>str;
	string hello = "hello";
	int i = 0;
	int z = 0;
	while(true){
		if(i == str.size() || z == hello.size()){
			break;
		}
		if(str[i] == hello[z]){
			z++;
		}
		i++;
	}
	if(z == 5){
		cout<<"YES"<<endl;
	}
	else {
		cout<<"NO"<<endl;
	}
}
