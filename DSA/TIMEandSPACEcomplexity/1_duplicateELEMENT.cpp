#include<iostream>

using namespace std;

int main() {
    int n;
    cout << "Enter the value of n : ";
    cin >> n;
    int arr[n];

    for (int i = 0; i < n; i++) {
        cout << "Enter the element at index " << i << " : ";
        cin >> arr[i];
    }

    bool flag = false; // Declare and initialize flag
    for (int i = 0; i < n - 1; i++) {
        for (int j = i + 1; j < n; j++) {
            if (arr[i] == arr[j]) {
                cout << " repeated element: " << arr[i] << endl;
                flag = true;
                break;
            }
        }
        if (flag == true)
            break;
    }

    if (!flag)
        cout << "No repeated element found." << endl;

    return 0;
}
