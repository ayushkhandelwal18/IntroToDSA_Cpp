#include<iostream>
using namespace std;
int main(){
    int a=15;
    int* ptr=&a;
    int b= (*ptr)++;
    cout<<a<<" "<<b;

    cout<<endl <<endl;

     int x=15;
    int* ptr2=&x;
    int y= ++(*ptr2);
    cout<<x<<" "<<y;
}
