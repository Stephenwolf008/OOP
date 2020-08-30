#include<iostream>
using namespace std;
class Complex{
int real,img;
public:
Complex operator <<(Complex C){
    cout<<C.real<<"+"<<C.img<<"i";
}
Complex operator >>(Complex C){
    cout<<"Enter real and imaginary part:";
    cin>>C.real>>C.img;
    return(C);
}
};
int main(){
Complex C1;
C1=C1.operator >>(C1);
C1.operator <<(C1);
return 0;
}
