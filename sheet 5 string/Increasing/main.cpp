#include <bits/stdc++.h>

using namespace std;

int main()
{
long long t;
cin>>t;
while(t--){
long long x,cnt=0;
cin>>x;
long long arr[x];
for(int i=0;i<x;i++){
    cin>>arr[i];
}
sort(arr,arr+x);
for(int i=0;i<x;i++){
    if(arr[i]!=arr[i+1]){cnt++;}
}
if(cnt==x){cout<<"YES"<<endl;}
else{
    cout<<"NO"<<endl;
}
}
return 0;
}




