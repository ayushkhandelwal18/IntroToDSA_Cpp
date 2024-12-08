#include<iostream>
#include<vector>
using namespace std;

//METHOD 1 : 2 BAR TRAVERSAL
void sort1(vector<int>&v){
    int n=v.size();
    int no0=0;
    int no1=0;
    for(int i=0;i<n;i++){
        if(v[i]==0) no0++;
        else no1++;
    }

    for(int i=0;i<n;i++){
        if(i<no0) v[i]=0;
        else v[i]=1;
    }
    return;
}

//METHOD 2: TWO POINTERS
void sort2(vector<int>&v){
    int i=0;
    int j=v.size()-1;

    while(i<=j){
        if(v[i]==0){
            i++;
            }
        else if(v[j]==1) {
            j--;
            }

            //if(i>j) break;

        else if(v[i]==1 && v[j]==0){
             v[i]=0;
             v[j]=1;
            i++;
            j--;
        }
    }
    return;
}

int main(){
    vector<int>v;
    v.push_back(1);
    v.push_back(1);
    v.push_back(0);
    v.push_back(0);
    v.push_back(1);
     v.push_back(1);
     v.push_back(0);
    v.push_back(1);

    for(int i=0;i<v.size();i++){
        cout<<v[i] <<" ";
    }
    cout<<endl;
    sort2(v);
    for(int i=0;i<v.size();i++){
        cout<<v[i] <<" ";
    }



}