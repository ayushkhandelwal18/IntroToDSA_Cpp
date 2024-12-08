#include<iostream>
using namespace std;

int main(){
    int m;
    cout<<"Enter no of rows / columns : ";
    cin>>m;

    

    int arr[m][m];
    for(int i=0;i<m;i++){
        for(int j=0;j<m;j++){
            cin>>arr[i][j];
        }
    }

     cout<<endl <<"original :" <<endl;;
  for(int i=0;i<m;i++){
        for(int j=0;j<m;j++){
         cout<<arr[i][j] <<" ";
        }
        cout<<endl;
    }
    
    for(int i=0;i<m;i++){
        for(int j=0;j<m;j++){
            int temp=arr[i][j];
            arr[i][j]=arr[j][i];
            arr[j][i]=temp;
        }
    }
    

    cout<<endl <<"Transpose : " <<endl;
    for(int i=0;i<m;i++){
        for(int j=0;j<m;j++){
           
            cout<<arr[i][j] <<" ";
        }
        cout<<endl;
    }

}