#include<iostream>
using namespace std;


class Node{
    public:
    int val;
    Node* next;

    Node(int val){
        this->val=val;
        this->next=NULL;
    }
};

int main(){
    Node a(10);
    Node b(20);
    Node c(30);
    Node d(40);
   

    a.next=&b;
    b.next=&c;
    c.next=&d;

     cout<<b.val <<endl<<endl;
    cout<<"Acess value of B using A"  <<endl; // (*(a.next)).val  OR a.next->val  dono same hai
    cout<<(*(a.next)).val  <<endl;
    cout<<a.next->val <<endl <<endl;

   cout<<"Changing value of B using A"  <<endl;
    a.next->val=100; // (*(a.next)).val=100;
    cout<<a.next->val <<endl <<endl;

    cout<<"Acess value of C using A"  <<endl;
    cout<<((a.next)->next)->val <<endl <<endl;

    cout<<"Acess value of D using A"  <<endl;
    cout<<(((a.next)->next)->next)->val <<endl <<endl;

    cout<<"Printing using loop : " <<endl;
    Node temp=a;
    while(1){
        cout<<temp.val <<"  ";
        if(temp.next==NULL) break;
        temp =(*(temp.next));
    }



   

}