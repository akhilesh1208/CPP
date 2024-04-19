#include"Abstraction.h"

XYZ::XYZ(){
    cout<<"first constructor"<<endl;
}




XYZ::~XYZ(){
    cout<<"distructor"<<endl;
}

// void XYZ::fun(){
//     cout<<"fun"<<endl;
// }

void XYZ::fun(int ){
    cout<<"fun int"<<data+1<<endl;
}
