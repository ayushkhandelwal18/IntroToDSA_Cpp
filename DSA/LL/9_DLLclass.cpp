#include<iostream>
using namespace std;

class Node{
    public:
    int val;
    Node* next;
     Node* prev;

     Node(int val){
        this->val=val;
        this->next=NULL;
        this->prev=NULL;
     }

    
};

class DLL{ // user defined data structure
  public:
  Node* head;
  Node* tail;

 int size;

 DLL(){
    head=tail=NULL;
    size=0;
 }

 void InsertAtTail(int val){
    Node* temp= new Node(val);

    if(size==0) head=tail=temp;

    else{
        tail->next=temp;
        temp->prev=tail; //extra
        tail=temp;
    }

    size++;
 }

  void InsertAtHead(int val){
    Node* temp= new Node(val);

    if(size==0) head=tail=temp;

    else{
        temp->next=head;
        head->prev=temp; //extra
        head=temp;
    }

    size++;
 }

 void insertAtIdx(int idx , int val){
    if(idx<0 || idx>size)  cout<<" Invalid " <<endl;

    if(idx==0) InsertAtHead(val);
    if(idx==size) InsertAtTail(val);

    else{
        Node* t=new Node(val);
        Node* temp=head;

        for(int i=1;i<=idx-1;i++){
            temp=temp->next;
        }

        t->next=temp->next;
        temp->next=t;
        t->prev=temp;     //extra
        t->next->prev=t;   //extra
        size++;
    }
 }

 void deleteAtHead(){
    if(size==0) cout<<"List is Empty" <<endl;
    else{
        head=head->next;
    if(head!=NULL)  head->prev=NULL; //extra
    if(head==NULL) tail=NULL; //extra
        size--;

    }
 }

 void deleteAtTail(){
    if(size==0) cout<<"List is Empty" <<endl;

    else if(size==1){  //extra 
        deleteAtHead();
        return;
    }

         Node* temp=tail->prev;
         temp->next=NULL;
         tail=temp;
      
        size--;

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
        temp->next->prev=temp;
        size--;
    }
}

int getATidx(int idx){
    if(idx<0 || idx>=size){
        cout<<"Invalid index" ;
        return -1;
    }

    else if(idx==0) return head->val;
    else if(idx==size-1) return tail->val;

    else{
        // Node* temp=head;
        // for(int i=1;i<=idx;i++){
        //     temp=temp->next;
        // }
        // return temp->val;

        if(idx<size/2){
             Node* temp=head;
        for(int i=1;i<=idx;i++){
            temp=temp->next;
        }
        return temp->val;
        }

        else{
            Node* temp=tail;
            for(int i=1;i<size;i++){
                temp=temp->prev;
            }
            return temp->val;
        }
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
    DLL  list;
    list.InsertAtTail(10);
    list.InsertAtTail(20);
    list.InsertAtTail(30);
    list.display();
    list.InsertAtTail(40);
    list.display();
    list.InsertAtHead(900);
    list.display();
    list.insertAtIdx(3,700);
    // list.display();
    // list.deleteAtHead();
    // list.display();
    // list.deleteAtTail();
    // list.display();
    // list.deleteAtIdx(2);
    // list.display();
   cout<< list.getATidx(2);
}