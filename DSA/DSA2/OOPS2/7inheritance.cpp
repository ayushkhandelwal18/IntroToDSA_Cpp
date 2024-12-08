#include<iostream>
using namespace std;

class Person{
    public :
    string name;
    int age;


  //  parameterised constructor
    Person (string name , int age){
        this->name=name;
        this->age=age;
    }

//     //non parameterised constructor
//     Person(){
//    cout <<"Parent constructor " <<endl;
//     }

     ~Person(){
   cout <<"Parent destructor " <<endl;
    }

  void   getinfoPerson(){
        cout<<"Name : " <<name <<endl;
        cout<<"Age : "  <<age <<endl;
    }
};

class Student : public Person{
    public :
    int rollNO;

    //jab parent me parameterised consturctor hai
     Student(string name , int age , int rollNO) : Person( name , age ){
        this->rollNO=rollNO;
    }

//    // jab parent me non-parameterised hai 
//     Student(){
//         cout<<"child constructor" <<endl;
//     }



    ~Student(){
        cout<<"child destructor" <<endl;
    }

    void   getinfoStudent(){
        cout<<"Name : " <<name <<endl;
        cout<<"Age : "  <<age <<endl;
        cout<<"Roll Number : " <<rollNO <<endl;
    }

};

int main(){
    // Student s1;
    // s1.name="Ayush Khandelwal";
    // s1.age=19;
    // s1.rollNO=2076;

    Student s1("Ayush Khandelwal" , 19 , 2076);



    s1.getinfoStudent();
}