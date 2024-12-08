#include<iostream>
using namespace std;

void display(int a[]){
    for(int i=0;i<5;i++) {
        cout<<a[i]<<" ";
    }
    return ;

}

void change(int b[]){
    b[0]=100;

}


int main(){
int arr[5]={1,4,2,7,4};
for(int i=0;i<5;i++) {
        cout<<arr[i]<<" ";
    }
    cout<<endl;
//accessing the elements of array in another function
//updation ,pass by value oR refernce??

display(arr);
cout<<endl; 

change(arr);
cout<<endl;

display(arr);
cout<<endl;

for(int i=0;i<5;i++) {
        cout<<arr[i]<<" ";
    }
}