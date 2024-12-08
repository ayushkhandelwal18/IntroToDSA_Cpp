#include<iostream>
using namespace std;
int main(){
    int x=10;
    int*p=&x;
    cout<<*p<<endl;
    cout<<p<<endl;
    cout<<endl;


//     p=p+1;//p++;
//   //phle wale address me increment hogya
//  //ab uspe value access krenge to ,, vo to grabage ayegi hi
//     cout<<*p<<endl;
//     cout<<p<<endl;
//


   *p=*p+1;
   *p=*p+10;
     //*ptr++ mat use krna,(*ptr)++ use kr skte hai
    // ab value me increment hua hai na ki adress m
   cout<<*p<<endl;
    cout<<p<<endl;
 }
