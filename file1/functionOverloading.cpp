#include<iostream>

using namespace std;
void fun();
void fun(int);
void fun(double);

int main()
{
    fun();
    fun(10);2
    fun(12.228);
    
    //return 0;
}

void fun()
{
    cout<< "void fun() "<<endl;
}
void fun(int a)
{
    
    cout<<a<<endl;
    
}

void fun(double)
{
    cout <<"void fun(double)"<<endl;
}
