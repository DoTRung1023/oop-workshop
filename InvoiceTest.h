#ifndef __INVOICETEST_H__
#define __INVOICETEST_H__

#include <iostream>
#include "Invoice.h"

class InvoiceTest {
public:
    void runTests() {
        testAddServiceCost();
        // Add other test methods here
        testConstructor();
        testGetDollarsOwed();
        testGetInvoiceId();
    }

private:
    void testAddServiceCost() {
        {
            Invoice invoice("ABCD");
            invoice.addServiceCost(10);
            if (invoice.getDollarsOwed() != 10) {
                std::cout << "Test 1 failed!" << std::endl;
            }
        }

        {
            Invoice invoice("ABCD");
            invoice.addServiceCost(1);
            if (invoice.getDollarsOwed() != 1) {
                std::cout << "Test 2 failed!" << std::endl;
            }
        }
        // Add more test cases here
        {
            Invoice invoice("ABCD");
            invoice.addServiceCost(-999);
            if (invoice.getDollarsOwed() != 0) {
                std::cout << "Test 3 failed!" << std::endl;
            }
        }
        {
            Invoice invoice("ABCD");
            invoice.addServiceCost(3.5623);
            if (invoice.getDollarsOwed() != 3.5623) {
                std::cout << "Test 4 failed!" << std::endl;
            }
        }
    }
    // Add other test functions here
    void testConstructor(){
        string text = "ABCD";
        Invoice invoice(text);
        if(invoice.getInvoiceId() != text){
            std::cout << "Test 5 failed!" << std::endl;
        }
    }
    void testGetDollarsOwed(){
        Invoice invoice("ABCD");
        invoice.addServiceCost(3.5623);
        invoice.addServiceCost(7.238);
        invoice.addServiceCost(-263);
        invoice.addServiceCost(17623);
        if (invoice.getDollarsOwed() != 17633.8003) {
            std::cout << "Test 6 failed!" << std::endl;
        }
    }
    void testGetInvoiceId(){
        string id = "gasjdg";
        Invoice invoice(id);
        if(invoice.getInvoiceId() != id){
            std::cout << "Test 7 failed!" << std::endl;
        }
    }
};

#endif