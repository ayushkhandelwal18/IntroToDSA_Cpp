#include <iostream>
#include<limits.h>
using namespace std;
int main()
{
    int n;
    cout << "Enter size of array : ";
    cin >> n;

    int arr[n];
    for (int i = 0; i < n; i++)
    {
        cout << " Enter " << i << " element of array :";
        cin >> arr[i];
    }

    int max=INT_MIN;
for (int i=0; i<n; i++)
    {
       if(max<arr[i]) max=arr[i];
    }
    cout<<"max is : "<<max;

cout<<endl;

     int Smax=INT_MIN;
for (int i=0; i<n; i++)
    {
       if(arr[i]!=max &&  Smax<arr[i]) Smax=arr[i];
    }
    cout<<"Smax is : "<<Smax;
    
    

}
