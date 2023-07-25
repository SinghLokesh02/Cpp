#include<bits/stdc++.h>
using namespace std;

class node{
    public:
    int data;
    node* next;
    node(int data){
        this->data = data;
        this->next = NULL;
    }

};

// Function to print the linked list
void print(node* temp){
    while(temp!=NULL){
        cout<<temp->data<<"->";
        temp = temp->next;
    }
}

// Insert at begin/head
void insertAtBegin(node* &head,int data){
    node* temp = new node(data);
    temp->next = head;//
    head = temp;
}

// Insert at end
void insertAtEnd(node* head,int data){
    node* temp = new node(data);
    if(head==NULL){
        temp->next = head;
        head = temp;
    }
    node* p = head;
    while(p->next!=NULL){
        p = p->next;
    }
    p->next = temp;
}

// function to insert at given index
void insertAtIndex(node* &head,int data,int index){
    node* temp = new node(data);
    if(index==0){
        temp->next = head;
        head = temp;
        return;
    }
    node* p = head;
    for(int i=0;i<index-1;i++){
        p = p->next;
    }
    temp->next = p->next;
    p->next = temp;
}



int main()
{
    node* head = new node(1);
    insertAtBegin(head,0);
    insertAtBegin(head,-1);
    insertAtBegin(head,-2);
    print(head);
    cout<<endl;
    insertAtEnd(head,7);
    insertAtEnd(head,9);
    print(head);
    cout<<endl;
    insertAtIndex(head,8,0);
    print(head);

return 0;
}