#include<iostream>

using namespace std;

class Node{
    public:

    int data;
    Node *next;
    Node *prev;
    
    Node(int data)
    {
        this->data = data;
        this->next = NULL;
        this->prev = NULL;

    }
};

void insertatbeginning(Node* &head, int data)
{
    Node *newNode = new Node(data);

    if(head == NULL){
        head = newNode;
        return;
    }
    newNode->next = head;
    head->prev = newNode;
    head = newNode;
}

void insertatend(Node* &head , int data){
    Node* newNode = new Node(data);

    if(head == NULL)
    {
        head = newNode;
        return;
    }

    Node* temp = head;
    while(temp -> next != NULL)
    {
        temp = temp->next;
    }
    temp -> next = newNode;
    newNode->prev = temp;

}

void insertatposition(Node* &head, int data, int position){
    if(position < 1){
        cout << "Position should be >= 1 " << endl;
        return;
    }

    if(position == 1){
        insertatbeginning(head,data);
        return;
    }

    Node * newNode = new Node(data);
    Node * temp = head;

    for(int i= 1 ; temp != NULL && i < position-1; i++)
    {
        temp = temp->next;
    }

    if(temp == NULL){
        cout << "Position greater than the number of nodes" << endl;
        return;
    }

    newNode->next = temp->next;
    newNode->prev = temp;
    if(temp->next != NULL){
        temp -> next->prev = newNode;
    }
    temp ->next = newNode;
}

void deleteatbeginning(Node *& head)
{
    if(head == NULL)
    {
        cout << "The list is already empty " << endl;
        return;
    }

    Node * temp = head;
    head = head->next;
    if(head!=NULL)
    {
        head->prev = NULL;

    }
    delete temp;
}

void deleteatend(Node * &head){
    if(head == NULL){
        cout << " The list is already empty" << endl;
        return;
    }

    Node * temp = head;

    if(temp -> next == NULL){
        head = NULL;
        delete temp;
        return;
    }

    while(temp->next != NULL){
        temp = temp -> next;
    }

    temp -> prev -> next = NULL;
    delete temp;
}

void print(Node * head){
    Node * temp = head;
    if(temp == NULL)
    {
        cout << " the list is empty " << endl;
        return;
    }
    while (temp != NULL)
    {
        cout  << temp -> data << " " ;
        temp = temp->next;

        /* code */
    }
    cout << endl;
    
}

int main()
{
    Node * head = NULL;

    insertatend(head, 10);
    insertatend(head, 20);

    insertatbeginning(head ,5);

    insertatposition(head, 15, 2);

    print(head);
    return 0;
}

