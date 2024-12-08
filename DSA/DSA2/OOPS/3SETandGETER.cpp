#include<iostream>
using namespace std;

class player{
    private:
    int score;
    int health;

    public:
    void setScore(int s){
        score=s;
    }
    void setHealth(int h){
        health=h;
    }

    int getScore(){
        return score;
    }

    int getHealth(){
        return health;
    }
};

int main(){
      
      player Ayush;
      Ayush.setHealth(100);
      Ayush.setScore(500);

    cout<<Ayush.getHealth() <<endl;
    cout<<Ayush.getScore();
}