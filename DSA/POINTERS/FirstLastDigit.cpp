#include<iostream>
using namespace std;

void FirstLast(int n,int* ptr,int* ptr2){
    *ptr2=n%10;//lastdigit
    while(n>9){
        n=n/10;
    }
    *ptr=n;
    return;

}

int main(){
    int n;
    cout<<"Enter value of n : ";
    cin>>n;

    int fd,ld;

    int* ptr=&fd;//firstdigit
    int* ptr2=&ld; //lastdigit

    FirstLast(n,ptr,ptr2);
    cout<<"First Digit : " <<fd <<endl;
    cout<<"Last Digit : " <<ld<<endl;


}