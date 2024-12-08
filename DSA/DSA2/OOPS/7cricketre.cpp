#include<iostream>
using namespace std;

class Cricketer{
    public:
    char name;
    int age;
    int noOfmatch;
    int avgScore;
};

 int main(){
   
    Cricketer virat;
    virat.name='V';
    virat.age=36;
    virat.noOfmatch=70;
    virat.avgScore=60;

     Cricketer Dhoni;
    Dhoni.name='D';
    Dhoni.age=42;
    Dhoni.noOfmatch=150;
    Dhoni.avgScore=50;

    Cricketer player[2]={virat, Dhoni};
  for(int i=0;i<2;i++){
     cout<<player[i].name<<endl;
    cout<<player[i].age<<endl;
    cout<<player[i].noOfmatch<<endl;
    cout<<player[i].avgScore<<endl;
    }
 }