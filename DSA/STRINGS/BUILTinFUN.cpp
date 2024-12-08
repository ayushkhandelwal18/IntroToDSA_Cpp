#include<iostream>
#include<algorithm>
using namespace std;

int main(){
    // string str="ayush is btech student";
    // cout<<str.size() <<endl;
    // cout<<str.length();


//     string str1="abcd";
//     cout<<str1 <<endl;
//     str1.push_back('e');
//     str1.push_back('f');
//   //  str1.push_back("ayush"); // this gives  error
//   //only a char can push_back
//     cout<<str1 <<endl;
//     str1.pop_back();
//    cout<<str1 <<endl;
//    str1.pop_back();
//    cout<<str1 <<endl;

// string s="abc";
// cout<<s+"def" <<endl;
// string t="def";
// cout<<s+t <<endl;
// s=s+t;
// cout<<s <<endl;
// cout<<t+"123";
// cout<<t+'a'  <<endl;

string str2="abcdef";
cout<<str2 <<endl;

reverse(str2.begin(),str2.end());
cout<<str2 <<endl;

str2="abcdef";
reverse(str2.begin()+2,str2.end());
cout<<str2 <<endl;

str2="abcdef";
reverse(str2.begin()+2,str2.end()-1);
cout<<str2 <<endl;

str2="abcdef";
reverse(str2.begin()+2,str2.begin()+5);
cout<<str2 <<endl;



}