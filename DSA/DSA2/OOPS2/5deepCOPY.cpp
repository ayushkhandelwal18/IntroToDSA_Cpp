#include<iostream>
using namespace std;

class Student{
    public:
    string name;
    double* cgpaPtr;

    Student(string name , double cgpa){
        this->name=name;
        cgpaPtr=new double;
        *cgpaPtr=cgpa;
    }

     //copy constructor
     // with deep copy
    Student(Student &obj){
        this->name = obj.name;
        cgpaPtr=new double;
        *cgpaPtr = *obj.cgpaPtr;
    }

    void getInfo(){
        cout<<"Name : " <<name <<endl;
        cout<<"cgpa : " <<*cgpaPtr  <<endl;
    }
};

int main(){
    Student s1("Ayush Khandelwal" , 8.08);
    //  s1.getInfo();
    Student s2(s1);

    
    *(s2.cgpaPtr)=9.2;

    s1.getInfo();
    
    s2.getInfo();
}