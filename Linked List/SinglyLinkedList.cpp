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
        temp -> next = NULL;
        delete temp;
    }
    // deleting any middle and last node
    else{
        Node* curr = head;
        Node* prev = NULL;

        int cnt = 1;
        while(cnt < position ){
            prev = curr;
            curr = curr-> next;
            cnt++;
        }

        prev->next = curr->next;
        curr-> next = NULL;
        delete curr;
    }
}

Node* floydDetectLoop(Node* head){
    
    if(head == NULL)
        return NULL;

    Node* slow = head;
    Node* fast = head;

    while(slow != NULL && fast != NULL){

        fast = fast->next;
        if(fast != NULL){
            fast = fast->next;
        }

        slow = slow->next;

        if(slow == fast){
            cout<<"present at :"<<slow->data<<endl;
            return slow;
        }
    }
    return NULL;
}

Node* getStartingNode(Node* head){

    if(head == NULL)
        return NULL;

    Node* intersection = floydDetectLoop(head);
    Node* slow = head;

    while(slow != intersection){
        slow = slow->next;
        intersection = intersection->next;
    }

    return slow;
}

void removeLoop(Node* head){

    if(head == NULL)
        return ;

    Node* startOfLoop = getStartingNode(head);
    Node* temp = startOfLoop;
    while(temp->next != startOfLoop){
        temp = temp->next;
    }
    temp->next = NULL;

    
}

int main(){

    Node* node1 = new Node(10);
    // cout<<node1->data<<endl;
    // cout<<node1->next<<endl;


    Node* head = node1;
    Node* tail = node1;
    // print(head);
    insertAtTail(tail, 12);
    // print(head);
    insertAtTail(tail, 15);
    // print(head);
    insertAtPosition(tail, head, 4, 22);
    // print(head);

    // deleteNode(1, head);
    // print(head);

    // deleteNode(2, head);

    // print(head);
    tail->next = head->next;

    cout<<"head: "<<head->data<<endl;
    cout<<"tail: "<<tail->data<<endl;

    if(floydDetectLoop != NULL){
        cout<<"cycle is present!"<<endl;
    }
    else{
        cout<<"no cycle!"<<endl;
    }

    Node* loop = getStartingNode(head);

    cout<<"loop start at: "<<loop->data;

    removeLoop(head);
    print(head);

    return 0;
}