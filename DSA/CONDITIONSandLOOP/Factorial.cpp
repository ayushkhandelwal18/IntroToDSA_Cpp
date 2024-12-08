#include<iostream>
using namespace std;
int main(){
    int n;
    cout<<"Enter a numbr :";
    cin>>n;

    if(n==0){
        cout<<1;
    }
    else{

    int i=1;
    int fact=1;

    while(i<=n){
        fact=fact*i;
        i++;
        }
        cout<<fact;
        }
        

}