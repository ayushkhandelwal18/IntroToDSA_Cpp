#include<iostream>
using namespace std;

  //automaticalliy abstract class ban gyi , pure virtual
  //function hai isliye
class Shape{
    virtual void draw()=0; // pure virtual function
};
// ab shape class ke object nhi bna skte
//bnayenge to error ayegA

class Circle : public Shape{
   public:
   void draw (){
    cout<<"drawing a circle\n";
   }
};

int main(){
    Circle c1;
    c1.draw();
}