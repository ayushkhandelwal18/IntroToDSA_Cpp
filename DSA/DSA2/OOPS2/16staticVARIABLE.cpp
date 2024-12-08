#include<iostream>
using namespace std;

// void fun(){
//     int x=0;
//     cout<<"x : " <<x <<endl;
//     x++;
// }

// void fun(){
//    static int x=0;
//     cout<<"x : " <<x <<endl;
//     x++;
// }

class A {
    public :
     int x;

     void increasex(){
        x=x+1;
     }
};

int main(){
    // fun();
    // fun();
    // fun();

    A obj1;
    A obj2;

    obj1.x=100;
    obj2.x=200;

    cout<<obj1.x <<endl;
    obj1.increasex();
    cout<<obj1.x <<endl;
    obj1.increasex();
    cout<<obj1.x <<endl;
   cout <<endl;

    cout<<obj2.x <<endl;
    obj2.increasex();
    cout<<obj2.x <<endl;
    obj2.increasex();
    cout<<obj2.x <<endl;
}