#include<iostream>
using namespace std;
void box(int n)
{
    for(int i=1;i<=n;i++){
        cout<<"*";
        for(int j=1;j<=n-1;j++)
               if(i==1 || i==n || j==n-1)
                cout<<"*";
               else
                cout<<" ";
        cout<<"\n";}
}
void oval(int n)
{
    for(int i=1;i<=n;i++){
        for(int j=1;j<=n;j++){
                if(i==1 || i==n){
                if(j>=4 && j<=n-3)
                    cout<<"*";
                else
                    cout<<" ";}
                else
                if(i==2 || i==n-1){
                    if(j==2 || j==n-1)
                    cout<<"*";
                    else
                    cout<<" ";}
                else
                if(j==1 || j==n)
                cout<<"*";
                else
                cout<<" ";}
        cout<<"\n";}
}
void arrow(int n)
{
    int k=1;
    for(int i=1;i<=n;i++){
        for(int j=1;j<=n;j++){
                if(i>=1 && i<=n-(n/3)*2){
                    if(j>n/2-k && j<n/2+k){
                            for(int l=1;l<=2*k-1;l++)
                            cout<<"*";
                            k++;
                            break;}
                    else
                        cout<<" ";}
        else{
            if(j==n/2)
            cout<<"*";
            else
            cout<<" ";}}
        cout<<"\n";}
}
void diamond(int n)
{
    int x=2,i=1;
    for(int k=1;k<=n;k++){
            for(int j=0;j<(n-i)/2;j++)
              cout<<" ";
            for(int j=0;j<i;j++){
                        if(j==0 || j==i-1)
                            cout<<"*";
                        else
                            cout<<" ";
                            if(i==n)
                              x=-2;}
           i+=x;
           cout<<"\n";}
}
int main()
{
    int n;
    cout<<"Enter the number of rows and columns:";
    cin>>n;
    box(n);
    cout<<endl;
    oval(n);
    cout<<endl;
    arrow(n);
    cout<<endl;
    if(n%2==0)
        cout<<"Diamond not possible as n is even\n";
    else
        diamond(n);
    return 0;
}
