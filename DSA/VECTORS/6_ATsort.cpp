#include<iostream>
#include<vector>
#include<algorithm>
using namespace std;

int main(){
    vector<int>v; 
      v.push_back(400);
       v.push_back(300);
        v.push_back(200);
         v.push_back(100);

        //  cout<<v.at(2);
        //  cout<<endl;
        //  v.at(2)=250;
        //  cout<<v.at(2);   

        for(int i=0;i<v.size();i++){
            cout<<v.at(i) <<" ";
        }

        sort(v.begin(),v.end());
        cout<<endl <<"After Sort" <<endl;
        for(int i=0;i<v.size();i++){
            cout<<v.at(i) <<" ";
        }

       
}