/* 
 * 
 * Call by address(pointer)
 * 
 */

#include<iostream>
using namespace std;

void change ( int *);

int main(){
    int var =10;
    cout<< "Before var:"<<var<<endl;
    change(&var);
    cout<< "After var:"<<var<< endl;
}

void change(int *xVar){
    *xVar+=20;
}
