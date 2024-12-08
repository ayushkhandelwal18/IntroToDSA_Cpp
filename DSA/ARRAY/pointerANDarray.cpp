#include<iostream>
using namespace std;
int main(){
    int arr[]={2,3,4,5,6};
    int size=sizeof(arr)/sizeof(int);
    int* ptr=arr;
    cout<<"ptr : " <<ptr <<endl;
    // cout<<ptr <<endl;//address of first element 
    // cout<<ptr[0] <<endl;
    //  cout<<ptr[1] <<endl;
    //  cout<<ptr[2] <<endl;
    //  cout<<ptr[3] <<endl;
    //   cout<<ptr[4] <<endl;

    for(int i=0;i<size;i++){
        cout<<*ptr<<" ";
        ptr++;
    }
   cout<<endl;
    cout<<"ptr : " <<ptr <<endl;
    ptr=arr; //ptr pointing elenent at 0 index
  cout<<"ptr : " <<ptr <<endl;

  *ptr=8;//ptr[0]=8
  ptr++;//ptr pointing to elemnt at 1 index
  *ptr=9;
  ptr--;//ptr pointing to elemnt at 0 index
     cout<<endl;
    
    for(int i=0;i<size;i++){
        cout<<*ptr<<" ";
        ptr++;
    }
    ptr=arr;//last me ye krdo , kyoki inti claculation ke baad ptr change hoga 
}