#include<iostream>
#include<vector>
using namespace std;


void merge(vector<int>&a, vector<int>&b, vector<int>&res){
    int i =0;
    int j =0;
    int k =0;

    while(i<a.size() && j<b.size())
    {
        if(a[i]<=b[j])       res[k++]=a[i++];  //    res[k]=a[i];  k++;   i++;
         
             else    res[k++]=b[j++];  //   res[k]=b[j];   k++;   j++;
               
        }

        if(i==a.size()) {
            while(j<b.size())    res[k++]=b[j++];  //  res[k]=b[j];   k++;   j++;
             }

         if(j==b.size()) {
        while(i<a.size())  res[k++]=a[i++];    // res[k]=a[i];  k++;   i++;
        }

       
}

void mergeSort(vector<int>&v){
    int n=v.size();

     if(n==1) return;

    int n1=n/2 , n2=n - n/2;

    vector<int>a(n1);
    vector<int>b(n2);

    for(int i=0;i<n1;i++)  a[i]=v[i];
    for(int i=0;i<n2;i++)  b[i]=v[i+n1];

    mergeSort(a);
    mergeSort(b);

    merge(a,b,v);
}



int main() {
 int arr[]={2,5,4,9,6,7,40,-40,0,3,1};
 int n=sizeof(arr)/sizeof(arr[0]);

 vector<int>v(arr,arr+n);
 mergeSort(v);

 for(int i=0;i<v.size();i++)  cout<<v[i] <<" ";

}