#include<iostream>
using namespace std;

 //default constructor

// class Bike{
//     public:
//     int tyreSize;

//     Bike (){
//     cout<<"Constructor call hua" <<endl;
//     }
// };

// int main(){
//      Bike hero; //object creation // constructor ko call jayega
//      Bike honda;
//      Bike bullet;
// }


 //parameterised constructor
 //value initialise kra
class Bike{
    public:
    int tyreSize;
    int engineSize;


    Bike (int tyreSize , int engineSize){
        this->tyreSize=tyreSize;
        this->engineSize=engineSize;
    cout<<"Constructor call hua" <<endl;
    }

    ~Bike(){
    cout<<"destructor call hua" <<endl;
}

};



int main(){
     Bike hero(30,90); //object creation // constructor ko call jayega
     Bike honda(40,100);
     Bike bullet(60,190);

     cout<<hero.tyreSize <<"     "  <<hero.engineSize <<endl;
     cout<<honda.tyreSize <<"     "  <<honda.engineSize<<endl;
     cout<<bullet.tyreSize <<"     "  <<bullet.engineSize<<endl;

}