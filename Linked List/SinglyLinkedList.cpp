#include<iostream>

using namespace std;

class Node{

    public:
    int data;
    Node* next;

    // constructor
    Node(int data){
        this->data = data;
        this->next = NULL;
    }

    // destuctor
    ~Node(){
        int value = this->data;
        // memory free
        if(this->next != NULL){
            delete next;
            this->next = NULL;
        }
        cout<<"Memory is free for node with data"<< value << endl;
    }
};


void insertAtHead(Node* &head, int d){

    // new node created
    Node* temp = new Node(d);
    temp->next = head;
    head = temp;
};

void insertAtTail(Node* &tail, int d){
    // new node created
    Node* temp = new Node(d);
    tail->next = temp;
    tail = tail->next;

}

void print(Node* &head){
    Node* temp = head;
    while(temp != NULL){
        cout<< temp->data<<" ";
        temp = temp->next;
    }
    cout<<endl;
}

void insertAtPosition(Node* &tail, Node* &head, int position, int d){

    // insert at first
    if(position ==  1){
        insertAtHead(head, d);
        return;
    }
    Node* temp = head;
    int cnt = 1;
    while(cnt < position-1){
    temp = temp->next;
     cnt++;
    }

    // insert at last
    if(temp->next == NULL){
        insertAtTail(tail, d);
        return;
    }

    // creating a node for d
    Node* nodeToInsert = new Node(d);
    nodeToInsert->next = temp->next;
    temp->next = nodeToInsert;
        
}

void deleteNode(int position, Node* &head){

    // deleting first node
    if(position == 1){
        Node* temp = head;
        head = head -> next;
        // memory free start node
        delete temp;
    }
    // deleting any middle and last node
    else{

    }
}

int main(){

    Node* node1 = new Node(10);
    // cout<<node1->data<<endl;
    // cout<<node1->next<<endl;


    Node* head = node1;
    Node* tail = node1;
    print(head);
    insertAtTail(tail, 12);
    print(head);
    insertAtTail(tail, 15);
    print(head);
    insertAtPosition(tail, head, 4, 13);
    print(head);


    return 0;
}