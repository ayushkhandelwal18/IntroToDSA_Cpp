#include<iostream>
using namespace std;
int a=9; 
int b=10;//global variable

void f(){
    cout<<" a in fun : " <<a;
     cout<<endl;
     cout<<" b in fun : " <<b;

}
int main(){

    cout<<"In main : ";
     cout<<endl;
    cout<<a <<endl;
    b=b+10;
    cout<<b <<endl;

    int a=2;//local variable
    cout<<a;

    cout<<endl;
    f();
}