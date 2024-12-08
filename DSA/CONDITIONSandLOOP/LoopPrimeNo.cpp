#include<iostream>
using namespace std;
int main(){
    int n;
    cout<<"Enter a number : ";
    cin>>n;

    int a=0;

    for(int i=2;i<n;i++){
        if(n%i==0){
         a=1;
          break;
     }
       
    }

    if(a==0)
    cout<<n << " is a prime no.";

    else
    cout<<n << " is  not a prime no.";

}