#include<iostream>
using namespace std;
int main(){
 bool p= false; //0
 bool q= false;//0
 bool r= true;//1

 cout<<(p==q==r) <<endl; //left to right solve krenge

 cout<<(p==r==q);
}
 