#include <iostream>
using namespace std;
int main()
{
    int n;
    cout << "Enter a numbr  :";
    cin >> n;

    int a = 1;
    int b = 1;
    int term;

    if (n == 1 || n == 2)
    {
        cout << "1";
    }
    else
    {
        for (int i = 3; i <= n; i++)
        {

            term = a + b;
            b = a;
            a = term;
        }
           cout << term;
    }
 
}