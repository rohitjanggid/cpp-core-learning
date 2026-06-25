#include <iostream>

using namespace std;

class Node
{
public:
    int data;
    Node *next;

    // constructor
    Node(int data)
    {
        this->data = data;
        this->next = next;
    }

    // destructor
    ~Node()
    {
        int val = this->data;
        if (this->next != NULL)
        {
            delete next;
            next = NULL;
        }
        cout << "Memory is free for node with data : " << val << endl;
    }
};

void insertNode(Node *&tail, int element, int d)
{
    // empty list
    if (tail == NULL)
    {
        Node *newNode = new Node(d);
        tail = newNode;
        newNode->next = newNode;
    }
    // none empty list
    // assuming that the element is present in the list

    else
    {
        Node *curr = tail;
        while (curr->data != element)
        {
            curr = curr->next;
        }

        // element founded -> curr is representing element wala node
        Node *temp = new Node(d);
        temp->next = curr->next;
        curr->next = temp;
    }
}

void print(Node *tail)
{
    Node *temp = tail;

    if(tail == NULL){
        cout<<"list is empty!";
    }

    do
    {
        cout << tail->data << " ";
        tail = tail->next;
    } while (tail != temp);
    cout << endl;
}

void deleteNode(Node *&tail, int element)
{

    // empty list
    if (tail == NULL)
    {
        cout << "list is empty already";
        return;
    }
    // non-empty
    // assuming that "value" is present in Linked list
    else
    {
        Node *prev = tail;
        Node *curr = prev->next;
        while (element != curr->data)
        {
            prev = curr;
            curr = curr->next;
        }

        prev->next = curr->next;

        if (prev == curr)
        {
            tail = NULL;
        }

        if (tail == curr)
        {
            tail = prev;
        }
        curr->next = NULL;
        delete curr;
    }
}

int main()
{
    Node *tail = NULL;

    // insert in empty list
    insertNode(tail, 1, 3);
    print(tail);

    insertNode(tail, 3, 5);
    print(tail);

    // insertNode(tail, 5, 7);
    // print(tail);

    // insertNode(tail, 7, 9);
    // print(tail);

    // insertNode(tail, 5, 6);
    // print(tail);

    deleteNode(tail, 3);
    print(tail);

    return 0;
}