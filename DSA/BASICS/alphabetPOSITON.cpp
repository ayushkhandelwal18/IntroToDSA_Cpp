#include<iostream>
using namespace std;
int main(){
    char ch;
    cout<<"Enter the  capital character"; // A,B,C....D 
    cin>>ch;

    int x=(int)ch;

    cout<<"Position of the character " <<ch <<" is : " <<x-64; 
}