#include<iostream>
using namespace std;
int main()
{
    int a[3],i=0,d;
    cout<<"Enter three numbers:";
    cin>>a[i];
    d=a[i];
    i++;
    while(i!=3)
    {
        cin>>a[i];
        if(d<a[i])
            d=a[i];
        i++;
    }
    cout<<"Greatest="<<d;
    return 0;
}
