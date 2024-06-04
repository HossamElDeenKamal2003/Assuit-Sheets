#include <iostream>

using namespace std;

int main()
{
    int t;
	cin>>t;
	while(t--){
		string s;
		cin>>s;
		int x = s.size();
		int n = 0;
		for(int i=0;i<x-2;i++){
			if((s[i] == '0' && s[i+1] == '1' && s[i+2] == '0') || (s[i] == '1' && s[i+1] == '0' && s[i+2] == '1')){
				n = 1;
				break;
			}
		}
		if(n == 1){
			cout<<"Good"<<endl;
		} else {
			cout<<"Bad"<<endl;
		}
	}
}
