#include<iostream>
#include<algorithm>
using namespace std;

int main(){

 string s;
 cout<<"Enter your string : ";
 getline(cin,s); 
 int n = s.length();
  cout<<s <<endl;
 reverse(s.begin(),s.begin()+n/2);
 cout<<s;





}