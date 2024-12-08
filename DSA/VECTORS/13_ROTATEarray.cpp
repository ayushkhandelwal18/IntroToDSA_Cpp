#include<iostream>
#include<vector>
using namespace std;

void display(vector<int>a){
    for(int i=0;i<a.size();i++){
        cout<<a[i] <<" ";
    }
    cout<<endl;
}

void reversePart(int i,int j,vector<int>&v){
    while(i<=j){
    int temp=v[i];
    v[i]=v[j];
    v[j]=temp;
    i++;
    j--;
    }
    return;
}

void rotate(vector<int>&v , int k){
    int n=v.size();
    reversePart(0,n-1-k,v);
    reversePart(n-k,n-1,v);
    reversePart(0,n-1,v);

    return;
}

int main(){
    vector<int>v;
    int n;
    cout<<"Enter the size of array : ";
    cin>>n;

    for(int i=0;i<n;i++){
    int q;
    cout<<"Enter the element : ";
    cin>>q;
    v.push_back(q);
    }

    int key;
    cout<<"Enter the key : ";
    cin>>key;

    if(key>v.size()) key =key % v.size();

     display(v);

    rotate(v,key);

    display(v);

}