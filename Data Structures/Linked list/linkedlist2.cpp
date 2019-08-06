//PRINTING THE Nth LAST NODE OF A LINKED LIST
#include<iostream>
using namespace std;

class Node {
public:
    int data;
    Node* next;
};

void nthLast(Node* head, int n)
{
    Node* temp = head;
    int len = 0;
    while (temp!=NULL)
    {
        temp = temp->next;
        len++;
    }
    temp=head;
    for(int i=0;i<(len-n);i++)
    {
        temp = temp->next;
        cout<<temp->data<<endl;
    }
    
}

int main()
{
    Node* head = NULL;
    Node* second = NULL;
    Node* third = NULL;

    head = new Node();
    second = new Node();
    third = new Node();

    head->data=1;
    head->next=second;

    second->data=2;
    second->next=third;

    third->data=3;
    third->next=NULL;

    nthLast(head, 2);
    return 0;
}