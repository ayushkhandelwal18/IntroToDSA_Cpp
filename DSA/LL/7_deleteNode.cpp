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

void display(Node* head){
    while(head!=NULL){
        cout<<head->val <<" ";
        head=head->next;
    }
    cout<<endl;
}

void DeleteNode(Node* head , Node* target){
    Node* temp=head;
    while(temp->next!=target){
        temp=temp->next;
    }
    temp->next=temp->next->next;
    

}

Node* DeleteNode2(Node* head , Node* target){
    if(head==target){
        head=head->next;
        return head;
    }
    Node* temp=head;
    while(temp->next!=target){
        temp=temp->next;
    }
    temp->next=temp->next->next;
    return head;
    

}

Node* DeleteNode3(Node* head , int targetval){
    if(head->val==targetval){
        head=head->next;
        return head;
    }
    Node* temp=head;
    while(temp->next->val!=targetval){
        temp=temp->next;
    }
    temp->next=temp->next->next;
    return head;
    

}

int main(){
    Node* a= new Node(10);
    Node* b= new Node(20);
    Node* c= new Node(30);
    Node* d= new Node(40);
    Node* e= new Node(50);

    a->next=b;
    b->next=c;
    c->next=d;
    d->next=e;

    // DeleteNode(a,e);
    // display(a);

     Node* head=a;
    display(head);
    head=DeleteNode2(head,c);
     display(head);
  
    // Node* head=a;
    // display(head);
    // head=DeleteNode3(head,30);
    // display(head);


}