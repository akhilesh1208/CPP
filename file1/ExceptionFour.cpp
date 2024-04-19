#include<iostream>
using namespace  std;

void createNprintArr(int);

int main(){
    
      createNprintArr(10);
      createNprintArr(20);
      createNprintArr(-20);
      createNprintArr(30);
    
}

void createNprintArr(int size){
    try{

    if(size<0)
        throw size;
    
    int *arr=new int[size];
    for(int cnt=0; cnt<size;cnt++)
        arr[cnt] = 101 + cnt;
    cout<<"arr: ";
    for(int cnt=0; cnt < size; cnt++)
        cout<<arr[cnt]<< " ";
    cout<<endl;
    delete[] arr;
    }catch(int x){
        cout<<"size cannot be"<<x<<endl;
    }
}
