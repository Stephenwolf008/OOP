#include<iostream>
using namespace std;
int recursiveMinimum(int *arr,int first,int last){static int temp=arr[first];
if(first==last)
    return temp;
if(first!=last){
    if(temp>arr[first])
        temp=arr[first];
}
if(first<last)
    return recursiveMinimum(arr,first+1,last);
}
int main(){int n;
cout<<"Size of array:";
cin>>n;
int arr[n];
cout<<"Elements of array:";
for(int i=0;i<n;i++)
    cin>>arr[i];
cout<<"Minimum:"<<recursiveMinimum(arr,0,n);
return 0;
}

