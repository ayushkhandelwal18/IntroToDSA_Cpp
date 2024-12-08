#include<iostream>
using namespace std;

void fun(int x,int y){
    cout <<"Fun address of x: " <<&x ;
     cout<<endl ;
      cout <<"Fun address of y: " <<&y ;
     cout<<endl ;

}


int main(){

    int x=3,y=7;
    cout <<"Main address of x: " <<&x ;
     cout<<endl ;
      cout <<"Main address of y: " <<&y ;
     cout<<endl ;
     cout<<endl ;

     fun(x,y);
}