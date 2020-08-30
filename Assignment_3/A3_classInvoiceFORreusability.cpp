#include<iostream>
#include"A3_classInvoiceFORreusability.h"
using namespace std;
Invoice::Invoice(){
        cout<<"Enter Part Number :";
        getline(cin,part_number);setPartNumber(part_number);
        cout<<"Enter Part Description :";
        getline(cin,part_description);setPartDescription(part_description);
        cout<<"Enter Quantity of Item :";
        cin>>quantity_of_item;setQuantity(quantity_of_item);
        cout<<"Enter Price of Item :";
        cin>>price_per_item;setPrice(price_per_item);
    }
void Invoice::setPartNumber(string part_number){
        this->part_number=part_number;
    }
void Invoice::setPartDescription(string part_description){
        this->part_description=part_description;
    }
void Invoice::setQuantity(int quantity_of_item){
        if(quantity_of_item<0)
            this->quantity_of_item=0;
        else this->quantity_of_item=quantity_of_item;
    }
void Invoice::setPrice(int price_per_item){
        if(price_per_item<0)
            this->price_per_item=0;
        else this->price_per_item=price_per_item;
    }
string Invoice::getPartNumber(){
        return part_number;
    }
string Invoice::getPartDescription(){
        return part_description;
    }
int Invoice::getQuantity(){
        return quantity_of_item;
    }
int Invoice::getPrice(){
        return price_per_item;
    }
int Invoice::getInvoiceAmount(){
        return quantity_of_item*price_per_item;
    }

