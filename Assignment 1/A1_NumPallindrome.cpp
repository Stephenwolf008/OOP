#include<iostream>
using namespace std;
int main()
{
    int a,b,c=0,x,i;
    cout<<"Enter a number=";
    cin>>a;
    x=a;
    for(i=1;a>0;i++)
    {
        b=a%10;
        c=c*10+b;
        a=a/10;
    }
    if(c%x==0)
        cout<<"IT IS A PALLINDROME";

    else
        cout<<"IT IS NOT A PALLINDROME";
    return 0;
}

