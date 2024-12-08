#include<iostream>
using namespace std;
int main(){
    int n;
    cout<<"Enter number of student :";
    cin>>n;
     int marks[n];
    

    for(int i=0;i<=n;i++){
        cout<<"Enter marks of " <<i  <<" roll number student :";
        cin>>marks[i];
    }

   // cout<<endl;
    //cout<<"Roll number of student having less than 35 marks are : ";
    cout<<endl;

    for(int i=0;i<=n;i++){
        if(marks[i]<35){
        cout<<i  <<" roll number student's marks is less than 35 : "  <<marks[i] <<endl;
     }
    
    }

    
   
}