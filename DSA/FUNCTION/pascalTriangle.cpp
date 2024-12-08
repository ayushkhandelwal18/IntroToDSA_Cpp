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

int main(){
    int n;
    cout<<"Enter value of n : ";
    cin>>n;

    for(int i=0;i<=n;i++){
        for(int j=0;j<=i;j++){
            cout<<NCR(i,j) <<" ";
        }
        cout<<endl;
    }
    
    }