#include<iostream>
using namespace std;
int main(){

    int a, b;
    char op;
    cout<<"Enter the two numbers and operation: ";
    cin>>a >>b >>op;

    switch(op){
        case '+':
        cout<<a+b;
        break;

        case '-':
        cout<<a-b;
        break;
        
        case '*':
        cout<<a*b;
        break;
        
        case '/':
        cout<<a/b;
        break;
        



    }
}