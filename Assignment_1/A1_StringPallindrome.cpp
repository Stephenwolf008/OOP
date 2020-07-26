#include<iostream>
#include<string.h>
#include<stdio.h>
using namespace std;
int main()
{
    char a[1024],c[1024];
    cout<<"Enter string:";
    gets(a);
    strcpy(c,a);
    strrev(c);
    if(strcmp(a,c)==0)
        cout<<"Pallindrome";
    else
        cout<<"Not Pallindrome";
    return 0;
}
