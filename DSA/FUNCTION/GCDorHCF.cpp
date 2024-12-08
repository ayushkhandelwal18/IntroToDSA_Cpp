#include <iostream>
using namespace std;

int gcd(int x, int y)
{
    int hcf = 1;
    for (int i = min(x, y); i >= 1; i--)
    {
        // ulta loop chlega to highest common factor jldi milega
        if (x % i == 0 && y % i == 0)
        {
            // i is a copmmon factor
            hcf = i;
            break;
        }
    }
    return hcf;
}

int main()
{
    int a;
    cout << "Enter 1st number : ";
    cin >> a;
    int b;
    cout << "Enter 2nd number : ";
    cin >> b;

    cout << "HCF or GCD of a and b is : " << gcd(a, b);
}