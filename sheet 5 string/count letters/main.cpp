#include <bits/stdc++.h>

using namespace std;

int main()
{
    string s;
    cin>>s;
    sort(s.begin(),s.end());
    int x=s.size();
    for(int i=0;i<x;i++){
        char ch=s[i];
        int ctr=1;
        while (s[i]==s[++i]){
            ctr++;
        }
        i--;
        cout<<ch<<" : "<<ctr<<endl;
    }
    return 0;
}
