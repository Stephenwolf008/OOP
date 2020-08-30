#include<iostream>
#include<stdlib.h>
using namespace std;
void stringReverse(string str,int first){
if(first==str.size())
    exit;
if(first!=str.size())
    cout<<str[str.size()-first-1];
if(first<str.size())
    return stringReverse(str,first+1);
}
int main(){string str;
cout<<"Enter String:";
getline(cin,str);
stringReverse(str,0);
return 0;
}

