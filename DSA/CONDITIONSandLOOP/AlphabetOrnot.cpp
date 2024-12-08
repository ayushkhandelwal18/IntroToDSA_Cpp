#include<iostream>
using namespace std;
int main(){
    char ch;
    cout<<"Enter the character : ";
    cin>>ch;

    int value=(int)ch;
    // a to z = 97 to 122 //A to Z =65 to 90

     if((value>=97 && value<=122) || (value>=65 && value<=90))
     cout<<ch <<" is a Alphabet";

     else
     cout<<ch <<" is another character then alphabet";

}