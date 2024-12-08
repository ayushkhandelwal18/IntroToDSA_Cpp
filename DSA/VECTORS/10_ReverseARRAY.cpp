#include<iostream>
#include<vector>
using namespace std;

int main(){
vector<int>v;
int n;
cout<<"Enter array size : ";
cin>>n;


for(int i=0;i<n;i++){
    int q;
    cout<<"Enter the element : ";
    cin>>q;
    v.push_back(q);
}

vector<int>v2(v.size());

for(int i=0;i<v.size();i++){
    //i+j=size-1;
    int j=v.size()-1-i;
    v2[i]=v[j];
}

for(int k=0; k<v2.size(); k++){
     cout<<v2[k] <<" ";
}

}