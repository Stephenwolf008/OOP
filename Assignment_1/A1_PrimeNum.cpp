#include<iostream>
using namespace std;
int main()
{
    int a,b=0,i;
    cout<<"Enter the number=";
    cin>>a;
    for(i=1;i<=a/2;i++)
        if(a%i==0)
            b++;
    if(b==1)
        cout<<"PN";
    else
        cout<<"NPN";
    return 0;
}

