#include<iostream>
using namespace std;

void StarTriangle(int n){
    for(int i=1;i<=n;i++){
        for(int j=1;j<=i;j++){
            cout<<"* ";
        }
        cout<<endl; 
    }

}
int main(){
    int l,m,n;
    cout<<"Enter number of rows  : ";
    cin>>l >>m >>n ;
    cout<<endl;
      cout<<"Small";
      cout<<endl;
     StarTriangle(l);
     cout<<endl;
      cout<<"Medium";
      cout<<endl;
     StarTriangle(m);
     cout<<endl;
      cout<<"Large";  
      cout<<endl;
    StarTriangle(n);

    
}