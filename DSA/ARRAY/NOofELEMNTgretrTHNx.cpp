#include<iostream>
using namespace std;
int main(){
    int n;
    cout<<"Enter the size of array : ";
    cin>>n;

    int arr[n];
    for (int i = 0; i < n; i++)
    {
        cout << " Enter " << i << " element of array :";
        cin >> arr[i];
    }

    int x;
    cout<<"Enter key : ";
    cin>>x;

    int count =0;
    for (int i = 0; i < n; i++)
    {
       if(arr[i]>x) count++;
    }

    cout<<count;
}