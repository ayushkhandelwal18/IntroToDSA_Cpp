#include<iostream>
using namespace std;
int main(){
    int n;
    cout<<"Enter number of rows : ";
    cin>>n;

     int m=n-1; //new lines

    for(int i=1;i<=2*n-1;i++){
        cout<<i <<" ";
    }
    cout<<endl;

     for(int i=1;i<=m;i++){
     //numbers
     
         for(int j=1;j<=m+1-i;j++){
            cout<<j <<" ";
           
         }
        //spaces
        for(int k=1;k<=2*i-1;k++){
            cout<<"  ";
        }
     
       //numbers
       
        int a=i+n;
         for(int t=1;t<=m+1-i;t++){
                 cout<<a <<" ";
                 a++;
            
       }
       cout<<endl;
}
    }