#include<iostream>
using namespace std;

int main(){
    string name="ayush";
    int count=0;
    int i=0;
    while(name[i]!='\0'){
           if(name[i]=='a'||name[i]=='e'||name[i]=='i'||name[i]=='o'||name[i]=='u'){
            count++;
           }
           i++;
    }
    cout<<count;
}