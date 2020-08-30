#include<iostream>
using namespace std;
int main(){
    bool arr[1000];
    for(int i=0;i<1000;i++)
        arr[i]=true;
    for(int i=2;i<1000;i++)
        if(arr[i]==true)
            for(int j=i*i;j<1000;j+=i)
                    arr[j]=false;
    cout<<"Prime numbers between 2 and 1000:\n";
    for(int i=2;i<1000;i++)
        if(arr[i]==true)
            cout<<i<<endl;
    return 0;
}
