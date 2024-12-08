#include<iostream>
#include<vector>
using namespace std;


// int main(){  // TC : O(n^2)

//    int a[]={5,1,8,2,3};
//    int n=sizeof(a)/sizeof(a[0]);
//     int count=0;
//     for(int i=0;i<n-1;i++){
//         for(int j=i+1;j<n;j++){
//             if(a[i]>a[j]) count++;
//         }
//     }
//     cout<<count;
// }

int inversion(vector<int>&a , vector<int>&b){
    int count=0;
    int i=0;
    int j=0;
    while(i<a.size() && j<b.size()){
        if(a[i]>b[j]) {
            count+= (a.size()-i);
            j++;
        }
        else{
            i++;
        }
    }
    return count;

}


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

int mergeSort(vector<int>&v){
     int count=0;
    int n=v.size();

      if (n <= 1) return 0;

    int n1=n/2 , n2=n - n/2;

    vector<int>a(n1);
    vector<int>b(n2);

    for(int i=0;i<n1;i++)  a[i]=v[i];
    for(int i=0;i<n2;i++)  b[i]=v[i+n1];

   

   count+= mergeSort(a);
  count+= mergeSort(b);
  count+=inversion(a,b);

    merge(a,b,v);
    a.clear();
    b.clear();
    return count;

}



int main() {
 int arr[]={5,1,8,2,3};
 int n=sizeof(arr)/sizeof(arr[0]);

 vector<int>v(arr,arr+n);
 

 cout<<mergeSort(v);

}