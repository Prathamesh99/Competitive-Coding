//Reversing a linked list
#include<iostream>
using namespace std;

class Node {
public:
    int data;
    Node* next;
};

void printlist()
{
    Node* temp = head;
    while(head!=NULL)
    {
        cout<<n->data<<endl;
        n = n->next;
    }
}

void reverse(Node* head)
{
    int len = 0;
    Node* prev = NULL;
    Node* current = head;
    Node* next1 = NULL;
    while(current!=NULL)
    {
        next1 = current->next;
        current->next = prev;
        prev = current;
        current = next1;
    }
    prev=head;
    while(prev!=NULL)
    {
        cout<<prev->data<<endl;
        prev = prev->next;
    }
    
}

class Linkedlist{
public:
    Node* head;
    Linkedlist()
    {
        head = NULL;
    }
};
int main()
{
    Node* head=NULL;
    Node* second=NULL;
    Node* third = NULL;

    head = new Node();
    second = new Node();
    third = new Node();

    head->data = 1;
    head->next = second;

    second->data = 2;
    second->next = third;

    third->data = 3;
    third->next = NULL;

    printlist(head);
    cout<<"\n";

    reverse(head);


    return 0;


}