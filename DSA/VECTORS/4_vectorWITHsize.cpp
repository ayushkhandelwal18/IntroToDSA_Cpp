#include<iostream>
#include<vector>
using namespace std;

int main(){
    vector<int>v(5);
    cout<<v.size() <<endl;
    cout<<v.capacity();

    vector<int>a(5,10); //size 5 and having each element 10
    cout<<a[4];
}