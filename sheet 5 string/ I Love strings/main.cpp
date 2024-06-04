#include<bits/stdc++.h>
using namespace std;
int main()
{
	int t;
	cin>>t;
	while(t--){
		string s1,s2;
		cin>>s1>>s2;
		int size = s1.size() + s2.size(); // 6
		int n1 = 1,n2 = 1;
		for(int i=0;i<size;i++){ // i = 3
			if(s1.size() != i && n1){   // 2
				cout<<s1[i];
			} else {
				n1 = 0;
			}
			if(s2.size() != i && n2){ // 4
				cout<<s2[i];
			} else {
				n2 = 0;
			}
		}
		cout<<endl;
	}
}

