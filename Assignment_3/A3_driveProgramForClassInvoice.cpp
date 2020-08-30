#include<iostream>
#include"A3_classInvoiceFORreusability.h"
using namespace std;
int main(){
    Invoice I1;
    cout<<"Part Number :"<<I1.getPartNumber()<<endl;
    cout<<"Part Description :"<<I1.getPartDescription()<<endl;
    cout<<"Quantity of Item :"<<I1.getQuantity()<<endl;
    cout<<"Price of Item :"<<I1.getPrice()<<endl;
    cout<<"Total Amount :"<<I1.getInvoiceAmount();
    return 0;
}
