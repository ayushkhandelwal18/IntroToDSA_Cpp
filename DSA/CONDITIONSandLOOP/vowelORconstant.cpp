#include <iostream>
using namespace std;
int main()
{
    char ch;
    cout << "Enter the character : ";
    cin >> ch;

    int value = (int)ch;
    // a to z = 97 to 122 //A to Z =65 to 90

    if ((value >= 97 && value <= 122) || (value >= 65 && value <= 90))
    {
        if (ch == 'a' || ch == 'e' || ch == 'i' || ch == 'o' || ch == 'u' || ch == 'A' || ch == 'E' || ch == 'I' || ch == 'O' || ch == 'U')
        {
            cout << ch << " is a Constant";
        }
        else
        {
            cout << ch << " is a Vowel";
        }
    }

    else
    {
        cout << ch << " is not a character ";
    }
}