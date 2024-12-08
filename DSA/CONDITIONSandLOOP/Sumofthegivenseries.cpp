#include<iostream>
using namespace std;
int main(){
    int n;
    cout<<"Enter upto which term you want sum of series :";
    cin>>n;

   // series : 1-2+3-4+5-6...UPTO N;
   int i=0;
   int sum=0;
   while(i<=n){
    if(i%2!=0) sum+=i;
    else sum-=i;
    i++;
 }
 cout<<"sum of the series up to " <<n <<" is :" <<sum;

}