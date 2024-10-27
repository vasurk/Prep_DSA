#include<iostream>

using namespace std;


class Node{
    public:
    int data;
    Node *next;

    //default constructor
    Node(){
        data = 0;
        next = NULL;

    }

//parameterised constructor
    Node(int data){
        this->data = data;
        this->next = NULL;
    }

};

class linkedlist{
    Node *head;

    public:
//default constructor
    linkedlist(){
        head = NULL;
    }

    void insertathead(int data){
        Node *newNode = new Node(data);

        if(head == NULL){
            head = newNode;
            return;
        }

        newNode->next = this->head;
        this->head = newNode;
    }

    void print(){
        Node *temp =head;
        
        if(head == NULL){
            cout << "LIST IS EMPTY" << endl;
            return ;
        }
        while(temp != NULL)
        {
            cout << temp-> data << " ";
            temp = temp->next;
        }
    }
};


int main(){
    linkedlist list;
    list.insertathead(1);
    list.insertathead(2);
    list.insertathead(4);
    list.insertathead(3);

    cout << " ELEMENTS OF THE LIST ARE : ";

    list.print();
    cout << endl;
    return 0;
}