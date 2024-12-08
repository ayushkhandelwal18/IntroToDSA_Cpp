#include<iostream>
using namespace std;

int main(){
     string name="ayush";
     cout<<name <<endl;
    // name[0]='A'; //change the first character
    // cout<<name;

    for(int i=0;name[i]!='\0';i++){
        if(i%2==0) name[i]='a'; 
    }
 cout<<name;

}