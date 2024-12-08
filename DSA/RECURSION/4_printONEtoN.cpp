#include<iostream>
using namespace std;

// void print(int i,int n) { 
//     if(i>n) return;
//     cout<<i <<endl;
//     print(i+1,n);
// }

void print2(int n){
    if(n==0) return;
    print2(n-1);
    cout<<n <<endl;

}
int main(){
    int n;
    cout<<"Enter a number : ";
    cin>>n;

    // print(1,n);
    print2(n);
}