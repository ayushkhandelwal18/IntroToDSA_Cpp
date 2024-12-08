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

void reverse(vector<int>&v){
    int i=0;
    int j=v.size()-1;
    while(i<=j){
    int temp=v[i];
    v[i]=v[j];
    v[j]=temp;
    i++;
    j--;
    }
    return;
}

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

display(v);
cout<<endl <<"After reverse : " <<endl;
// reversePart(0,3,v);
reverse(v);
display(v);

}