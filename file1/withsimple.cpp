#include<iostream>
using namespace std;

class Simple{
    int data;
public:
    void getData(int x=10){
        this->data=x;
    }
    void printData(){
        cout<<"Data:"<<data<<endl;
    }
};

int main(){
    Simple obj;
    obj.getData(100);
    obj.printData();// this is method chaining
}
