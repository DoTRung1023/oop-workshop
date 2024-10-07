#include <iostream>
#include <string>
#include <stack>

using namespace std;

class USBConnection
{
private:
    int ID;
    int maxPort;
    USBConnection(){}
public:
    static stack<int> IDavailable;
    USBConnection(int maxPort){
        this->maxPort = maxPort;
    }
    static USBConnection* CreateUsbConnection(){
        if(IDavailable.empty()){
            return nullptr;
        }
        else{
            USBConnection* newConnection = new USBConnection;
            newConnection->ID = IDavailable.top();
            IDavailable.pop();
            return newConnection;
        }
    }
    int get_id(){
        return ID;
    }
    ~USBConnection(){
        IDavailable.push(ID);
    }
};

stack<int> USBConnection::IDavailable({3, 2, 1});