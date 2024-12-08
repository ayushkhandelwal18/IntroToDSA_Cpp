#include<iostream>
using namespace std;

void swap(int* x,int* y){
    int temp= *x;
    *x=*y;
    *y=temp;
    return;
}
int main(){
     int a,b;
    cout<<"Enter value of a : ";
    cin>>a;
    cout<<"Enter value of b : ";
    cin>>b;
    cout<<"Original a and b is :" <<a <<" and " <<b;
   cout<<endl;
   
    // swap(&a,&b); 
    int* x=&a;
    int* y=&b;
    swap(x,y);
    cout<<"swap of a and b is :" <<a <<" and " <<b;



}