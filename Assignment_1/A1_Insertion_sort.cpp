#include<iostream>
using namespace std;
int main()
{
    int d,n,j;
    cout<<"Enter the limit of array:";
    cin>>n;
    int a[n];
    cout<<"Enter the elements of array:";
    for(int i=0;i<n;i++)
        cin>>a[i];
    for(int i=1;i<n;i++)
    {
        d=a[i];
        j=i-1;
        while(j>=0 && a[j]>d)
        {
            a[j+1]=a[j];
            j--;
        }
        a[j+1]=d;
    }
    for(int i=0;i<n;i++)
        cout<<a[i]<<" ";
    return 0;
}


