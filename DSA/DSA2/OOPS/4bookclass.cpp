#include<iostream>
using namespace std;

class book{
    public:
  char name;
  int price;
  int noOfpages;

  int countBOOk(int p){
    if(price<p) return 1;
    else return 0;
  }

  int isBOOKpresent(char book){
    if(name==book) return true;
    else return false;

  }
};

int main(){
    book harrypoter;
    harrypoter.name='H';
    harrypoter.price=1000;
    harrypoter.noOfpages=500;

    cout<<harrypoter.countBOOk(2000) <<endl;

    cout<<harrypoter.isBOOKpresent('H');


}