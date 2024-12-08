#include<iostream>
using namespace std;
int main(){
    int n;
    cout<<"Enter number of rows : ";
    cin>>n;

    

     for(int i=1;i<=m;i++){
     //numbers
     
         for(int j=1;j<=m+1-i;j++){
            cout<<j <<" ";
         }
      
     
        int a=i+n;
         for(int t=1;t<=m+1-i;t++){
                 cout<<a <<" ";
                 a++;
            
       }
       cout<<endl;
}
    }