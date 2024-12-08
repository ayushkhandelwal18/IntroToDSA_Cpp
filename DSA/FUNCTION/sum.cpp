#include<iostream>

using namespace std;

int sum(int x,int y){
    return x+y;
}

int main(){
    int a,b;
    cout<<"Enter two numbers :";
    cin>>a >>b;
    cout<<"sum : " <<sum(a,b);

    
}