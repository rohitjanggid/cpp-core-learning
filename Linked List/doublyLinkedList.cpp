#include <iostream>

using namespace std;

class Node
{
public:
    int data;
    Node *prev;
    Node *next;

    // constructor
    Node(int data)
    {
        this->data = data;
        this->prev = NULL;
        this->next = NULL;
    }

    // destructor
    ~Node(){
        int value = this->data;
        if(next != NULL){
            delete next;
            next = NULL;
        }
        cout<<"memory free for node with data "<<value<<endl;
    }
};

// travesting a linked list
void print(Node *&head)
{
    Node *temp = head;
    while (temp != NULL)
    {
        cout << temp->data << " ";
        temp = temp->next;
    }
    cout << endl;
}

// gives length of linked list
int getLength(Node *&head)
{
    Node *temp = head;
    int len = 0;
    while (temp != NULL)
    {
        len++;
        temp = temp->next;
    }
    return len;
}

void insertAtHead(Node *&head, Node *&tail, int d)
{
    if (head == NULL)
    {
        Node *temp = new Node(d);
        head = temp;
        tail = temp;
    }
    else
    {
        Node *temp = new Node(d);
        temp->next = head;
        head->prev = temp;
        head = temp;
    }
}

void insertAtTail(Node *&tail, Node *&head, int d)
{
    if (tail == NULL)
    {
        Node *temp = new Node(d);
        tail = temp;
        head = temp;
    }
    else
    {
        Node *temp = new Node(d);
        tail->next = temp;
        temp->prev = tail;
        tail = tail->next;
    }
}

void insertAtPosition(Node *&tail, Node *&head, int position, int d)
{

    // insert at first
    if (position == 1)
    {
        insertAtHead(head, tail, d);
        return;
    }

    Node *temp = head;
    int cnt = 1;
    while (cnt < position - 1)
    {
        temp = temp->next;
        cnt++;
    }

    // insert at last
    if (temp->next == NULL)
    {
        insertAtTail(tail, head, d);
        return;
    }

    // creating a node for d
    Node *nodeToInsert = new Node(d);
    nodeToInsert->next = temp->next;
    temp->next->prev = nodeToInsert;
    nodeToInsert->prev = temp;
    temp->next = nodeToInsert;
}

void deleteNode(Node *&head, int position)
{

    // delete first node
    if (position == 1)
    {
        Node *temp = head;
        head = head->next;
        // free from memory
        head->prev = NULL;
        temp->next = NULL;
        delete temp;
    }
    else
    {
        // delete any middle and last node
        Node *curr = head;
        Node *prev = NULL;
        int cnt = 1;
        while (cnt < position)
        {
            prev = curr;
            curr = curr->next;
            cnt++;
        }
        curr->prev = NULL;
        prev->next = curr->next;
        curr->next = NULL;
        delete curr;
        
    }
}

int main()
{
    Node *head = NULL;
    Node *tail = NULL;

    print(head);

    insertAtHead(head, tail, 10);
    print(head);

    insertAtHead(head, tail, 9);
    print(head);

    insertAtTail(tail, head, 12);
    print(head);

    insertAtPosition(tail, head, 3, 11);
    print(head);

    deleteNode(head, 4);
    print(head);
    cout<<head->data<<endl;
    cout<<tail->data<<endl;

    return 0;
}