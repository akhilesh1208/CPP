#include<iostream>
using namespace std;

int main(){
    
    int size;
    cout<<"enter the size:";
    cin>>size;
    try{
    if(size<0)
        throw size;
    
    int *arr= new int[size];
    for(int cnt=0; cnt<size; cnt++)
        arr[cnt]=1001 +cnt;
    cout<<"arr: ";
    for(int cnt=0; cnt<size; cnt++)
        cout<<arr[cnt]<<" ";
    cout<<endl;
    delete[]arr;
    }catch(int x){
        cout<<"Size cannot be"<< x << endl;
    }
}
    
