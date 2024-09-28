#ifndef __INVOICE_H__
#define __INVOICE_H__

#include <iostream>

using namespace std;

class Invoice
{
private:
    string invoiceID;
    double dollarsOwed;
public:
    Invoice(string invoiceId);
    void addServiceCost(double costDollars);
    double getDollarsOwed();
    string getInvoiceId();
};

#endif