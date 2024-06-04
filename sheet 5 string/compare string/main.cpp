#include <iostream>

using namespace std;

int main()
{
    string v1,v2;
    cin>>v1>>v2;
    int size1=v1.size(),size2=v2.size();
    int siz=min(size1,size2);
    int flag=0;
    for(int i=0;i<siz;i++){
        if (v1[i]<v2[i]){
                flag=0;
            cout<<v1<<endl;
            break;
        }
        else if (v1[i]>v2[i]){
            flag=0;
            cout<<v2<<endl;
            break;
        }
        else{
            flag=-1;
        }
    }
    if (flag == -1){
        if(size1>size2)
            cout<<v2<<endl;
        else
            cout<<v1<<endl;
    }

    return 0;
}
