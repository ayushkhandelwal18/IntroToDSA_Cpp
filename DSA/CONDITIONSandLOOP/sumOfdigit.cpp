#include<iostream>
using namespace std;
int main(){
    int n;
    cout<<"Enter a numbr :";
    cin>>n;

    int m=n;

    int sum=0;
   // int lastd=0;
    while(n!=0){
        sum=sum+n%10;
        n=n/10;
        }
        cout<<"Sum of the digits of " <<m <<" is :" <<sum;

}