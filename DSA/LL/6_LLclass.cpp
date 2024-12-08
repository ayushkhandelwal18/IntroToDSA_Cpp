#include<iostream>
using namespace std;

class Node{ //user defined data type
    public:
    int val;
    Node* next;
    Node(int val){
        this->val=val;
        this->next=NULL;
    }
};

class LinkedList{ // user defined data structure
  public:
  Node* head;
  Node* tail;

 int size;

 LinkedList(){
    head=tail=NULL;
    size=0;
 }

 void InsertAtEnd(int val){
    Node* temp= new Node(val);

    if(size==0) head=tail=temp;

    else{
        tail->next=temp;
        tail=temp;
    }

    size++;
 }

  void InsertAtBegining(int val){
    Node* temp= new Node(val);

    if(size==0) head=tail=temp;

    else{
        temp->next=head;
        head=temp;
    }

    size++;
 }

 void insertAtIdx(int idx , int val){
    if(idx<0 || idx>size)  cout<<" Invalid " <<endl;

    if(idx==0) InsertAtBegining(val);
    if(idx==size) InsertAtEnd(val);

    else{
        Node* t=new Node(val);
        Node* temp=head;

        for(int i=1;i<=idx-1;i++){
            temp=temp->next;
        }

        t->next=temp->next;
        temp->next=t;
        size++;
    }
 }

 void deleteAtHead(){
    if(size==0) cout<<"List is Empty" <<endl;
    else{
        head=head->next;
        size--;

    }
 }

 void deleteAtTail(){
    if(size==0) cout<<"List is Empty" <<endl;
    else{
       Node* temp=head;
       while(temp->next!=tail) {
        temp=temp->next;
       }
       temp->next=NULL;
       tail=temp;
        size--;

    }
 }

 void deleteAtIdx(int idx){
    if(idx<0 || idx>=size) {
        cout<<"Invalid" <<endl;
        return;
    }
    
    else if(idx==0)  deleteAtHead();
    else if(idx==size-1) deleteAtTail();
    else{
        Node* temp=head;
        for(int i=1;i<=idx-1;i++){
            temp=temp->next;
        }
        temp->next=temp->next->next;
        size--;
    }
}

 void display(){
     Node* temp =head;
     while(temp!=NULL){
        cout<<temp->val <<" ";
        temp=temp->next;
     }
     cout<<endl;
 }

};

int main(){
    LinkedList ll;
    ll.InsertAtEnd(10);
    ll.InsertAtEnd(20);
    ll.InsertAtEnd(30);
    ll.InsertAtEnd(40);

    cout<<"Insert At End : " ;
    ll.display();
    cout<<ll.size <<endl;
    

    cout<<"Insert At Begining  : " ;
    ll.InsertAtBegining(90);
    ll.display();
    cout<<ll.size <<endl;
  
    cout<<"Insert At Index : " ;
     ll.insertAtIdx(3,100);
     ll.display();
    cout<<ll.size <<endl;

     cout<<"Delete At Head  : " ;
     ll.deleteAtHead();
     ll.display();
     cout<<ll.size <<endl;

    cout<<"Delete At Tail  : " ;
    ll.deleteAtTail();
    ll.display();
    cout<<ll.size <<endl;

    cout<<"Delete At index  : " ;
    ll.deleteAtIdx(2);
    ll.display();
    cout<<ll.size <<endl;

}