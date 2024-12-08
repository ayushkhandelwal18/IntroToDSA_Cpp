#include<iostream>
using namespace std;

void summ(int sum,int n) { 
    if(n==0) {
        cout<<sum<<endl;
        return;
    }
    summ(sum+n,n-1);
}

int sum2(int n){
    if(n==0) return 0;
    else return n+sum2(n-1);
}
int main(){
    int n;
    cout<<"Enter a number : ";
    cin>>n;

   int s= sum2(n);
   printf("%d",s);

}