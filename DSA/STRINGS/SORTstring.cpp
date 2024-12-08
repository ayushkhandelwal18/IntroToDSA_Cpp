#include<iostream>
#include<algorithm>
using namespace std;
 
 int main(){
    string s;
    cout<<"enter string : ";
    getline(cin,s);
    cout<<s <<endl;

    sort(s.begin(),s.end());
    cout<<s;
 }