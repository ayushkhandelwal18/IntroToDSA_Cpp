#include<iostream>
using namespace std;
int main(){
    // int x=10;
    // int y=8;

    // int*p1=&x;
    // int*p2=&y;
    // cout<<*p1+(*p2);

    //takig input through pointer
    int x,y;
     int*p1=&x;
     int*p2=&y;
     cout<<"Enter first Number :";
     cin>>*p1;
     cout<<"Enter second Number :";
     cin>>*p2;

     cout<<x+y;

}