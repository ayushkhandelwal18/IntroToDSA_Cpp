#include<iostream>
using namespace std;

class Player{
    public:
    int score;
    int health;

    void showhealth(){
        cout<<"Health is : " <<health;
    }
};

int main(){
    Player ayush;
    ayush.score=90;
    ayush.health=70;

    ayush.showhealth();
}