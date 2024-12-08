#include<iostream>
#include<vector>
using namespace std;


void move(vector<int>&v){
    int i=0;
    int j=v.size()-1;

    while(i<=j){
        if(v[i]<0){
            i++;
            }
        else if(v[j]>=0) {
            j--;
            }

            //if(i>j) break;

        else if(v[i]>=0 && v[j]<0){
            int temp=v[i];
            v[i]=v[j];
            v[j]=temp;
            i++;
            j--;
        }
    }
    return;
}

int main(){
    vector<int>v;
    v.push_back(-1);
    v.push_back(100);
    v.push_back(0);
    v.push_back(-300);
    v.push_back(16);
     v.push_back(19);
     v.push_back(-90);
    v.push_back(-81);

    for(int i=0;i<v.size();i++){
        cout<<v[i] <<" ";
    }
    cout<<endl;
    move(v);
    for(int i=0;i<v.size();i++){
        cout<<v[i] <<" ";
    }



}