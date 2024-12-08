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


for(int k=0; k<v.size(); k++){
     cout<<v[k] <<" ";
} 

int i=0;
int j=v.size()-1;

while(i<=j){  //for(int i=0,j=v.size()-1;i<=j;i++,j--)
    int temp=v[i];
    v[i]=v[j];
    v[j]=temp;
    i++;
    j--;
}
//reverse(v.begin(),v.end()) we also use this
cout<<endl <<"After reverse : " <<endl;
for(int k=0; k<v.size(); k++){
     cout<<v[k] <<" ";
}

}