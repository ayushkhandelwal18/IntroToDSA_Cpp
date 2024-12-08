#include<iostream>
using namespace std;
int main(){
    int n;
    cout<<"Enter number of rows : ";
    cin>>n;

     int m=n-1; //new lines

    for(int i=1;i<=2*n-1;i++){
        cout<<"* ";
    }
    cout<<endl;

     for(int i=1;i<=m;i++){
      //STARS
         for(int j=1;j<=m+1-i;j++){
            cout<<"* ";
         }
        //spaces
        for(int k=1;k<=2*i-1;k++){
            cout<<"  ";
        }
     
        //STARS
         for(int t=1;t<=m+1-i;t++){
            cout<<"* ";
       }
       cout<<endl;
}
    }