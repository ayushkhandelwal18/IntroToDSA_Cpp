#include<iostream>
using namespace std;

// int fact(int x){
//     int factorial=1;
//     int i=1;
//     while(i<=x){
//         factorial=factorial*i;
//         i++;
//     }
//     return factorial;
// }


int main(){
    int n;
    cout<<"Enter value of n : ";
    cin>>n;
    // for(int i=1;i<=n;i++){
//cout <<"Factorial of " <<i <<" is : ";
     //cout<<fact(i) <<endl;
    // }

    int fact=1;
    for(int i=1;i<=n;i++){
        fact=fact*i;
cout <<"Factorial of " <<i <<" is : ";
         cout<<fact <<endl;

    }
    

   

   
    
    
    

}