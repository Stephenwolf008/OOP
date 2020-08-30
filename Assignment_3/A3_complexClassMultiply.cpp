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
Complex operator *(Complex C){
    Complex temp;
    temp.real=(real*C.real)-(img*C.img);
    temp.img=(real*C.img)+(img*C.real);
    return(temp);
}
};
int main(){
Complex C1,C2,C3;
C1=C1.operator >>(C1);
C2=C2.operator >>(C2);
C3=C1*C2;
C3.operator <<(C3);
return 0;
}

