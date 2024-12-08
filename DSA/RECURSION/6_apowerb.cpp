#include<iostream>
using namespace std;


    // int power(int a, int b){
    //     if(b==0) return 1;
    //     else{
    //         return a*power(a,b-1);
    //     }
    // }

      int power2(int a, int b){
        if(b==0) return 1;

       
        
        if(b%2==0){
            int ans=power2(a,b/2);
            return ans*ans;
        }

        if(b%2!=0){
            int ans=power2(a,b/2);
            return a*ans*ans;
        }
            
        
    }
 
 int main(){
    int a;
    cout<<"Enter value of a: ";
    cin>>a;

     int b;
    cout<<"Enter value of b: ";
    cin>>b;

    printf("%d",power2(a,b));
 }