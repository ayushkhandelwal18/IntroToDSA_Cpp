#include<iostream>
using namespace std;

class Calculator{
    public:
    int a;
    int b;

    void add(){
        cout<<a+b <<endl;
    }

    void sub(){
        cout<<a-b <<endl;
    }
    
    void mul(){
        cout<<a*b <<endl;
    }

    void div(){
        cout<<a/b <<endl;

    }
};

int main(){
      Calculator casio;
      cout<<"Enter value  of a : ";
      cin>>casio.a;

      cout<<"Enter value  of b : ";
      cin>>casio.b;

      casio.add();
      casio.sub();
      casio.mul();
      casio.div();

   

}