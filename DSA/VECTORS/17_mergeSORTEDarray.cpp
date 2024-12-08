#include<iostream>
#include<vector>
using namespace std;

vector<int> merge(vector<int>&v1 ,vector<int>&v2){
   int n=v1.size();
    int m=v2.size();

    vector<int>v(m+n);
    int i=0;
    int j=0;
    int k=0;

    while(i<n && j<m){
        if(v1[i]<v2[j]){
            v[k]=v1[i];
            i++;
            k++;
        }

        else { //v1[i]<v2[j]
            v[k]=v2[j];
            j++;
            k++;
        }
    }
    // for remaining element
    if(i==n){ // v1 ke sare element utha chuka hu
        while(j<=m-1){
            v[k]=v2[j];
            j++;
            k++;
        }
    }

    else{// v2 ke sare element utha chuka hu
        while(i<=n-1){
            v[k]=v1[i];
            i++;
            k++;
        }
 }
 return v;
}

int main(){

vector<int>v1;
v1.push_back(1);
v1.push_back(4);
v1.push_back(5);
v1.push_back(8);
for(int i=0;i<v1.size();i++){
    cout<<v1[i] <<" ";
}
cout<<endl;

vector<int>v2;
v2.push_back(2);
v2.push_back(3);
v2.push_back(6);
v2.push_back(7);
v2.push_back(10);
v2.push_back(12);
for(int i=0;i<v2.size();i++){
    cout<<v2[i] <<" ";
}
cout<<endl;

vector<int>v = merge(v1,v2);

for(int i=0;i<v.size();i++){
    cout<<v[i] <<" ";
}

 }