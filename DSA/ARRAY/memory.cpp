#include<iostream>
using namespace std;
int main(){
    int arr[4]={1,2,3,4};
    int size=sizeof(arr)/sizeof(int);
    cout<<size <<endl;

    cout<<&arr <<endl;
    cout<<arr <<endl;
    cout<<&arr[0] <<endl;
    cout<<&arr[1] <<endl;
    cout<<&arr[2] <<endl;
    cout<<&arr[3] <<endl;

}