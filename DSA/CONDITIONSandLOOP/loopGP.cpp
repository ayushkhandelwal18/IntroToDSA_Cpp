#include<iostream>
using namespace std;
int main(){
    int n;
    cout<<"Enter the number ";
    cin>>n;
    int a=1;
    for( int i=1;i<=n;i++){  //i*=2 use krenge to n ki jghaa GP ki last term ayegi
        cout<<a <<endl;
        a=a*2;
    }
}