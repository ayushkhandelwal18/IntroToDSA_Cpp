#include<iostream>
using namespace std;
int main(){
    int n;
    cout<<"Enter a number : ";
    cin>>n;

    for(int i=2;i<n;i++){
        if(n%i==0){
            cout<<n<< " is a composite number.";
         break;
        }
     
    }

}