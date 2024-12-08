#include<iostream>
using namespace std;
int main(){
    //USING 3RD VARIABLE
    // int a,b;
    // cout<<"Enter value of a : ";
    // cin>>a;
    // cout<<"Enter value of b : ";
    // cin>>b;
    // cout<<"Original a and b is :" <<a <<" and " <<b;

    // int temp=a;
    // a=b;
    // b=temp;
    //  cout<<endl;
    // cout<<"swap of a and b is :" <<a <<" and " <<b;

    
   //WITHOUT USING 3RD VARIABLE
    int a,b;
    cout<<"Enter value of a : ";
    cin>>a;
    cout<<"Enter value of b : ";
    cin>>b;
    cout<<"Original a and b is :" <<a <<" and " <<b;

   a=a+b;
   b=a-b;
   a=a-b;
    
     cout<<endl;
    cout<<"swap of a and b is :" <<a <<" and " <<b;


}