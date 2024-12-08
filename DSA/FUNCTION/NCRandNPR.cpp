#include<iostream>
using namespace std;

int fact(int x){
    int factorial=1;
    int i=1;
    while(i<=x){
        factorial=factorial*i;
        i++;
    }
    return factorial;
}
int NCR(int n,int r){
    int ncr= fact(n)/(fact(n-r)*fact(r));
  return ncr;
}
int NPR(int n,int r){
    int npr= fact(n)/fact(n-r);
  return npr;
}

int main(){
    int n,r;
    cout<<"Enter value of n : ";
    cin>>n;
    cout<<"Enter value of r : ";
    cin>>r;

    cout<<NCR(n,r) <<endl <<NPR(n,r);

   
    
    
    

}