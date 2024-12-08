#include<iostream>
using namespace std;

int partition(int arr[],int si , int ei){
    int pivotELE =arr[si];
    int count=0;

    for(int i=si+1;i<=ei;i++){
       
        if(arr[i]<=pivotELE) count++;
    }
   

    int pivotIDX = count+si;
    swap(arr[si],arr[pivotIDX]);

    int i=si;
    int j=ei;

    while(i<pivotIDX && j>pivotIDX){
      if(arr[i]<=pivotELE)  i++;
      
        
       if(arr[i]>pivotELE)   j--;
            

        else if(arr[i]>pivotELE && arr[j]<=pivotELE){
            swap(arr[i],arr[j]);
            i++;
            j--;
        }
    }
    return pivotIDX;
}

void quicksort(int arr[], int si , int ei){

    if(si>=ei) return;

    int pi=partition(arr,si,ei);
    quicksort(arr,si,pi-1);
    quicksort(arr,pi+1,ei);
}

int main(){

//  int arr[]={2,5,3,-10,0,90,7,50,-3,8};
int arr[]={5,1,8,2,7,6,3,4};

int n=sizeof(arr)/sizeof(arr[0]);
quicksort(arr,0,n-1);

for(int i=0;i<n;i++) {
    cout<<arr[i] <<" ";
}

}