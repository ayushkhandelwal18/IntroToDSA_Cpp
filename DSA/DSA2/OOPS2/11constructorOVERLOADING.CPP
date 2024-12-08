#include<iostream>
using namespace  std;

class Student {
    public : 
    string name;

    Student(){
        cout<<"non-parametrerised constructor" <<endl;

    }

    Student(string name){
        this->name=name;
        cout<<" paramterised" <<endl;
    }
};

int main(){
    Student s1 ("ayush");

    Student s2;
    Student s3;
}
