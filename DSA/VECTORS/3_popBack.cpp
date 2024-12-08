#include<iostream>
#include<vector>
using namespace std;

int main(){
    vector<int>v; 
   
   
      v.push_back(80);
       v.push_back(70);
        v.push_back(60);
         v.push_back(50);
         v.push_back(40);
       v.push_back(30);
        v.push_back(20);
         v.push_back(10);

         for(int i=0;i<v.size();i++){
            cout<<v[i] <<" ";
         }
        cout<<endl;
         cout<<"size : " <<v.size() <<endl;
        cout<<"capacity :"<<v.capacity() <<endl;
         cout<<endl;

       
        v.pop_back();
        v.pop_back();
       cout<<endl <<"After pop back :";

         for(int i=0;i<v.size();i++){
            cout<<v[i] <<" ";
         }
        cout<<endl;
         cout<<"size : " <<v.size() <<endl;
        cout<<"capacity :"<<v.capacity() <<endl;
         cout<<endl;
     
         
}