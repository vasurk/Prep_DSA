#include<iostream>

using namespace std;

struct Node{
    int data;
    Node * next;
};

class LinkedList {
    Node * head;

    public:

    LinkedList() : head(NULL) {}

    void insertatBeginning(int value){
        Node * newNode = new Node();
        newNode -> data = value;
        newNode -> next = head;
        head = newNode;
    }

    void insertatEnd(int value){
        Node *newNode = new Node();
        newNode->data = value;
        newNode->next = NULL;

        if(!head)
        {
            head =newNode;
            return;
        }

        Node* temp =head;
        while(temp -> next){
            temp = temp->next;
        }
        temp->next = newNode;

    }

    void insertatPosition(int value,int position){
        if(position < 1){
            cout << "Position should be >= 1.  " << endl;
            return;
        }

        if(position == 1)
        {
            insertatBeginning(value);
            return;
        }

        Node * newNode = new Node();
        newNode -> data = value;
        Node *temp = head;
        for (int i= 1;i < position-1 && temp ; ++i){
        temp = temp->next;
        }

        if(!temp){
            cout << "Position is out of range " << endl;
            delete newNode;
            return;
        }

        newNode -> next = temp ->next;
        temp -> next = newNode;

    }

    

}