#include<iostream>
using namespace std;
class Complex{
int real,img;
public:
Complex operator >>(Complex C){
    cout<<"Enter real and imaginary part:";
    cin>>C.real>>C.img;
    return(C);
}
bool operator ==(Complex C){
    if(C.real==real && C.img==img)
        return true;
    else return false;
}
bool operator !=(Complex C){
    if(C.real!=real || C.img!=img)
        return true;
    else return false;
}
};
int main(){
Complex C1,C2;
C1=C1.operator >>(C1);
C2=C2.operator >>(C2);
if(C1==C2)
    cout<<"Complex numbers are same";
else
    if(C1!=C2)
    cout<<"Complex numbers are not same";
return 0;
}

