#include<iostream>
#include<vector>
using namespace std;

int main(){
    vector<int>v; //you not need to give size
   
   //  v[0]=5;  ese nhi karna hai

   //inserting /input do not use[]
      v.push_back(4);
       v.push_back(3);
        v.push_back(2);
         v.push_back(1);

//if you want to update /access use []
         cout<<v[0] <<" ";
          cout<<v[1] <<" "; 
           cout<<v[2] <<" "; 
            cout<<v[3] <<" ";

}