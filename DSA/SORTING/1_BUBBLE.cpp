#include<iostream>
using namespace std;

int main(){
    int arr[]={5,4,6,3,2,1};
    int n=6;

    // for(int i=0;i<n-1;i++){ // n-1 passes
    //       for(int j=0;j<n-1-i;j++){  //n-1-i is much better than n-1
    //         if(arr[j]>arr[j+1]){
    //       swap(arr[j],arr[j+1]);
    //     }
    //         }
    // }

    // optimize

     for(int i=0;i<n-1;i++)   { // n-1 passes
     bool flag = true;
          for(int j=0;j<n-1-i;j++){  //n-1-i is much better than n-1
            if(arr[j]>arr[j+1]){
          swap(arr[j],arr[j+1]);
          flag=false;
        }
    }
    if(flag==true) break; // swap not happen
}

     for(int i=0;i<n;i++){
        cout<<arr[i] <<" ";
    }

}

