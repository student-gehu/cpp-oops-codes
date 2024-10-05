#include <iostream>
using namespace std;
class Invoice{
    private:
        string partNumber;
        string partDescription;
        int quantity;
        double price_per_item;
    public:
        Invoice(string pN, string pD, int qty, double price){
            setpartNumber(pN);
            setpartDescription(pD);
            setquantity(qty);
            setprice(price);
        }
        void setpartNumber(string part){
            partNumber = part;
        }
        string getpartNumber(){
            return partNumber;
        }
        void setpartDescription(string description){
            partDescription = description;
        }
        string getpartDescription(){
            return partDescription;
        }
        void setquantity(int q){
            quantity = q;
        }
        int getquantity(){
            return quantity;
        }
        void setprice(int p){
            price_per_item = p;
        }
        double getprice(){
            return price_per_item;
        }

        double getInvoiceAmount(){
            return quantity*price_per_item;
        }
};
int main(){
    Invoice Invoice("MK66", "Lenovo Legion", 26, 46);
    cout<< "Part Number: " <<Invoice.getpartNumber() <<endl;
    cout<< "Part Description: " <<Invoice.getpartDescription() <<endl;
    cout<< "Quantity: " <<Invoice.getquantity() <<endl;
    cout<< "Price per Item: $" <<Invoice.getprice() <<endl;
    cout<< "Invoice Amount: $" <<Invoice.getInvoiceAmount() <<endl;
    return 0;
}
