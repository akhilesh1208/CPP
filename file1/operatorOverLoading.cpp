#include<iostream>
using namespace std;

class Test{
    int data;
public:
    Test(int x=0):data(x){}
    void print(){
        cout<<"Data:"<<data<<endl;
    }
    
    Test operator+(Test &rhs){
        Test temp;
        temp.data = this-> data + rhs.data;
        return temp;
    }
};

int main(){
    Test a =100;
    Test b =50;
    Test c =a+b;
    
    a.print();
    b.print();
    c.print();
}
