#include<iostream>
using namespace std;

void swap(int a, int b){
    
   a=a+b;
   b=a-b;
   a=a-b;
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
     swap(a,b);
    cout<<"swap of a and b is :" <<a <<" and " <<b;

}