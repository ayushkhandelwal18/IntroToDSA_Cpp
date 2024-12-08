#include <iostream>
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

    int max=arr[0];
for (int i = 1; i < n-1; i++)
    {
       if(max<arr[i]) max=arr[i];
    }
    cout<<"max is : "<<max;

cout<<endl;
     int min=arr[0];
for (int i = 1; i < n-1; i++)
    {
       if(min>arr[i]) min=arr[i];
    }
    cout<<"min is : "<<min;
    
    

}
