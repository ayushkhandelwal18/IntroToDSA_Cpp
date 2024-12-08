#include<iostream>
using namespace std;

int main(){
    int n;
    cout<<"Enter value of n : ";
    cin>>n;

    for(int i=0;i<=n;i++){
        int curr=1; //current value
        for(int j=0;j<=i;j++){
            cout<<curr <<" ";
            curr=curr*(i-j)/(j+1); 
 //next value or increment in current value

        }
        cout<<endl;
    }
    
    }