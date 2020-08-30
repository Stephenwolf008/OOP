#include<iostream>
using namespace std;
class Invoice{
private:
    string part_number,part_description;
    int quantity_of_item,price_per_item;
public:
    Invoice();
    void setPartNumber(string);
    void setPartDescription(string);
    void setQuantity(int);
    void setPrice(int);
    string getPartNumber();
    string getPartDescription();
    int getQuantity();
    int getPrice();
    int getInvoiceAmount();
};
