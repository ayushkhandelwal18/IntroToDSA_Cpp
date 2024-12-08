#include<iostream>
using namespace std;
int main(){
    int x=90;
    int* p=&x;
    cout<<p<<endl;
    x=100;
    cout<<p<<endl;
    //adress change nhi hoga

    int y=90;
    int* p2=&y;
    cout<<p2<<endl;
    *p2=100;
    cout<<y<<endl;
    cout<<p2<<endl;


}