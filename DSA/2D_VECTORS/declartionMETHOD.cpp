#include<iostream>
using namespace std;
#include<vector>

int main(){

    // in 1D vector
    vector<int>v1(3,1);//creating a vector of size 3 with all elements initialized to 1

    vector< vector<int> > v2(3, vector<int>(4) ); // 2D Vector of size 3
    // ek 2D vector hai size 3 ka or uske andar 4 size ke vector hai

     vector< vector<int> > v(3, vector<int>(4,2) );
     // 2D Vector of size 3
    // ek 2D vector hai size 3 ka or uske andar 4 size ke vector hai un sabki value 2 hai

    cout<<v[2][2] <<endl;

    for(int i=0;i<3;i++){
        for(int j=0;j<4;j++){
   cout<<v[i][j]<<" ";
}  
     cout<<endl;
  }

  cout<<v.size()<<endl; //no of rows
  cout<<v[0].size(); //no of columns

}