#include<iostream>
using namespace std;
int main(){
    // int n;
    // cout<<"Enter the number ";
    // cin>>n;

   
    //AP is -> 100 ,97,94 ......up to last+ve term
    //formule se last +ve term nikalenge 
    //last+ve term 1 aarhi hai or ye 34th term hogi
 
 //method 1

    // int a=100;
    // for( int i=1;i<=34;i++){
    //     cout<<a <<endl;
    //     a=a-3;
    // }

    // method 2

//     int a=100;
//      for( int i=1;a>0;i++){ //loop chla do jab tak a+ve hai
//       cout<<a <<endl;
//        a=a-3;
// }

//method 3
 
     for( int i=100;i>0;i-=3){ //loop chla do jab tak a+ve hai
      cout<<i <<endl;
    
}

}