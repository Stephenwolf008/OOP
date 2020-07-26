#include<iostream>
using namespace std;
int main()
{
    int d,n;
    cout<<"Enter the limit of array:";
    cin>>n;
    int a[n];
    cout<<"Enter the elements of array:";
    for(int i=0;i<n;i++)
        cin>>a[i];
    for(int i=0;i<n-1;i++)
    for(int j=i+1;j<n;j++)
        if(a[j]<a[i])
        {
            d=a[i];
            a[i]=a[j];
            a[j]=d;
        }
    cout<<"2 max="<<a[n-2]<<endl<<"2 min="<<a[1];
    return 0;
}

