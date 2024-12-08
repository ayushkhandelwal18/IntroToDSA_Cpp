#include<iostream>
using namespace std;
int main(){
    int n;
    cout<<"Enter a numbr :";
    cin>>n;

    int m=n;

    int r=0;
   // int lastd=0;
    while(n!=0){
        r=r*10+n%10;
        n=n/10;
        }
        cout<<"reverse of the digits of " <<m <<" is :" <<r;

}