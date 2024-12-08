#include<iostream>
using namespace std;
int main(){
    int n;
    cout<<"Enter size of array : ";
    cin>>n;

    int arr[n];
    for(int i=0;i<n;i++){
        cout<<" Enter " <<i <<" element of array :";
        cin>>arr[i];
    }

    int sum=0;
    for(int i=0;i<n;i++){
        sum=sum+arr[i];
       }

       cout<<sum <<endl;

        int product=1;
    for(int i=0;i<n;i++){
       product*=arr[i];
       }

       cout<<product <<endl;
}


    