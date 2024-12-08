#include<iostream>
using namespace std;

void pip(int n){
    if(n==0) return;
    cout<<"Pre" <<endl;
    pip(n-1);
    cout<<"In" <<endl;
    pip(n-1);
    cout<<"Post" <<endl;
}

int main(){
     pip(2);
}