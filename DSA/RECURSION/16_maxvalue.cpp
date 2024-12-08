#include<iostream>
#include<limits.h>
using namespace std;

void maxval(int arr[], int n, int idx, int max) {
    if (idx == n) {
        cout << max;
        return;
    }
    if (max < arr[idx]) max = arr[idx];  
    maxval(arr, n, idx + 1, max);
}

int maxval2(int arr[], int n , int idx){
    if(idx==n) return INT_MIN;
    return max(arr[idx],maxval2(arr,n,idx+1));
}

int main() {
    int arr[] = {1, 2, 3, 4, 5, 6, 7};
    int n = sizeof(arr) / sizeof(arr[0]);

    maxval(arr, n, 0, INT_MIN);
    cout<<endl;
   cout<<maxval2(arr,n,0);
    return 0;  
}
