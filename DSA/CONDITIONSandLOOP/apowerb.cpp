#include<iostream>
using namespace std;
int main(){
    int a;//base
    int b;//power
    cout<<"Enter the base : ";
    cin>>a;
    cout<<"Enter the power : ";
    cin>>b;
    bool flag=true;//true means power +ve

    if(b<0){
        flag=false;//false means power -ve
        b=-b;
    }

    float ans=1;
    int i=1;
    while(i<=b){
        ans=ans*a;
        i++;
    }
    if(flag==false){
        ans=1/ans;
    }
    cout<<ans;
    
    
    }