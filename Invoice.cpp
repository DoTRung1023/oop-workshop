#include <iostream>
#include "Invoice.h"

using namespace std;

Invoice::Invoice(string invoiceId): invoiceID(invoiceId), dollarsOwed(0){}
void Invoice::addServiceCost(double costDollars){
    if(costDollars > 0){
        dollarsOwed += costDollars;
    }
}
double Invoice::getDollarsOwed(){
    return dollarsOwed;
}
string Invoice::getInvoiceId(){
    return invoiceID;
}
