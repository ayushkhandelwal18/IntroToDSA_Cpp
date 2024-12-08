#include<iostream>
#include<limits.h>
using namespace std;

int main(){
    int arr[]={ 2,4,5,73,2,84,9,3,45};
    int n=9;

    for(int i=0;i<n-1;i++){
        int min=INT_MAX;
        int minidx=-1;

        for(int j=i;j<n;j++){
            if(arr[j]<min){
                min=arr[j];
                minidx=j;
            }
        }
        swap(arr[i],arr[minidx]);
    }
for(int ele : arr){
    cout<<ele <<" ";
}
}