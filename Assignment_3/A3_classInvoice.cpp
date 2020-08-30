#include<iostream>
using namespace std;
class Invoice{
private:
    string part_number,part_description;
    int quantity_of_item,price_per_item;
public:
    Invoice(){
        cout<<"Enter Part Number :";
        getline(cin,part_number);setPartNumber(part_number);
        cout<<"Enter Part Description :";
        getline(cin,part_description);setPartDescription(part_description);
        cout<<"Enter Quantity of Item :";
        cin>>quantity_of_item;setQuantity(quantity_of_item);
        cout<<"Enter Price of Item :";
        cin>>price_per_item;setPrice(price_per_item);
    }
    void setPartNumber(string part_number){
        this->part_number=part_number;
    }
    void setPartDescription(string part_description){
        this->part_description=part_description;
    }
    void setQuantity(int quantity_of_item){
        if(quantity_of_item<0)
            this->quantity_of_item=0;
        else this->quantity_of_item=quantity_of_item;
    }
    void setPrice(int price_per_item){
        if(price_per_item<0)
            this->price_per_item=0;
        else this->price_per_item=price_per_item;
    }
    string getPartNumber(){
        return part_number;
    }
    string getPartDescription(){
        return part_description;
    }
    int getQuantity(){
        return quantity_of_item;
    }
    int getPrice(){
        return price_per_item;
    }
    int getInvoiceAmount(){
        return quantity_of_item*price_per_item;
    }
};
int main(){
    Invoice I1;
    cout<<"Part Number :"<<I1.getPartNumber()<<endl;
    cout<<"Part Description :"<<I1.getPartDescription()<<endl;
    cout<<"Quantity of Item :"<<I1.getQuantity()<<endl;
    cout<<"Price of Item :"<<I1.getPrice()<<endl;
    cout<<"Total Amount :"<<I1.getInvoiceAmount();
}
