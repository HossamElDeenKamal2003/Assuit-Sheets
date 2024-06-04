#include<iostream>

using namespace std;

int main()
 {
	int x,y;
	cin>>x>>y;
	int num;
	int sum1=0,sum2=0;
	for(int i=0;i<x;i++){
		cin>>num;
		sum1+=num;
	}
	for(int i=0;i<y;i++){
		cin>>num;
		sum2+=num;
	}
	if(sum1 == sum2){
		cout<<"Yes"<<endl;
	}else {
		cout<<"No"<<endl;
	}
}

