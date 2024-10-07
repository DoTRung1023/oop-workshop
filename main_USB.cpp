#include <iostream>
#include <stack> //for list of ids
#include "USBConnection.h"
using namespace std;

int main(){
    int max_usb_ports = 10;
    // implementation to create a USB connection
    // return a new USBConnection object if a port is available
    // otherwise, return nullptr
    // implementation to get the ID of the USB connection

    USBConnection* c[max_usb_ports];
    for(int i=0;i<max_usb_ports;i++){
        c[i] = USBConnection::CreateUsbConnection();
        if (c[i] != nullptr){
            cout << "USB connection with ID =" << c[i]->get_id() << " was created\n";
        }else{
            cout << "no more USB ports available\n";
        }
    }
    delete c[1];
    // this should return ID 2 to the stack.

    USBConnection* a = USBConnection::CreateUsbConnection();
    if (a != nullptr){
            cout << "USB connection with ID =" << a->get_id() << " was created\n";
    } else {
            cout << "no more USB ports available\n";
    }


    return 0;
}