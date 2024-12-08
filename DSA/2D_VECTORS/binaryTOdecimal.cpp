#include<iostream>
using namespace std;

int main(){
    int arr[7]={1,1,0,0,1,0,1};
    
    int sum=0;
    int x=1;

    for(int i=6;i>=0;i--){
        sum+=arr[i]*x;
        x*=2;
    }
    cout<<sum;
}