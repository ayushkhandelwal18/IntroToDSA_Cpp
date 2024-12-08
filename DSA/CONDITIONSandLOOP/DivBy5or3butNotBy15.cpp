#include<iostream>
using namespace std;
 int main(){

    int n;
    cout<<"Enter the number : ";
    cin>>n;

    // if((n%5==0 || n%3==0) && n%15!=0)
    // cout<<"Condition matched";

    // else
    // cout<<"Conditon don't matched";

    if(n%3==0 || n%5==0){
        if(n%15!=0){
          cout<<"Condition matched";

    }
    else{
         cout<<"Conditon don't matched";
    }
    }
    else{
     cout<<"Conditon don't matched";
    }
 }