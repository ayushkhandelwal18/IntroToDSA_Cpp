#include<iostream>
#include<vector>
using namespace std;

void change(vector<int>&a){
    a[0]=500;
   
    for(int i=0;i<a.size();i++){
            cout<<a[i] <<" ";
        }
        cout<<endl;
}

int main(){
    vector<int>v; 
      v.push_back(400);
       v.push_back(300);
        v.push_back(200);
         v.push_back(100);

          

        for(int i=0;i<v.size();i++){
            cout<<v[i] <<" ";
        }
        cout<<endl;
        change(v);
        for(int i=0;i<v.size();i++){
            cout<<v[i] <<" ";
        }

       

       
}