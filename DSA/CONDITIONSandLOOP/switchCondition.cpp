#include <iostream>
using namespace std;
int main()
{
    int x;
    cout << "Enter day number ";
    cin >> x;

    // 1 3 5 7 8 10 12 ->31days
    // 4 6 9 11->30days
    // 2 ->28 days
    switch ((x <= 7 && x % 2 != 0) || (x <= 8 && x % 2 == 0))
    {
    case 1:
        cout << "31 days";
        break;
    }

    switch (x == 7 || x == 6 || x == 9 || x == 11)
    {
    case 1:
        cout << "30 days";
        break;
    }
    switch (x)
    { // x==2 denge to x%2==0 wali condition bhi hit hogi
    case 2:
        cout << "28 days";
        break;
    }
}