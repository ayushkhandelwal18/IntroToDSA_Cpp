#include<iostream>
#include<limits.h>
using namespace std;

int main(){
    int m;
    cout<<"Enter no of rows : ";
    cin>>m;

    int n;
    cout<<"Enter no of columns : ";
    cin>>n;

    int arr[m][n];
    for(int i=0;i<m;i++){
        for(int j=0;j<n;j++){
            cin>>arr[i][j];
        }
    }

   

   int sum=0;
    for(int i=0;i<m;i++){
        for(int j=0;j<n;j++){
            sum=sum+arr[i][j];
        }
    }
    cout<<endl;
    cout<<sum;

}