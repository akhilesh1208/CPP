#include<iostream>
using namespace  std;


void createNprintArr(int);

int main(){
    try{
        
      createNprintArr(10);
      createNprintArr(20);
      createNprintArr(-20);
      createNprintArr(30);
    }catch(int size){
        cout<<"Size cannot be"<<size<<endl;
    }
}

void createNprintArr(int size){

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
}

