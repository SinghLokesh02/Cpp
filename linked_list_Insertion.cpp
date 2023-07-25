#include <bits/stdc++.h>
using namespace std;
// Creating a template for creating linked list
class node
{
public:
    int data;
    node *next;
    node(int data)
    {
        this->data = data;
        this->next = NULL;
    }
};

// Print the linked List
void print(node *head)
{
    node *temp = head;
    while (temp != NULL)
    {
        cout << temp->data << "-->";
        temp = temp->next;
    }
    cout << "NULL" << endl;
}
// Function to add Insert data at head/initail
void insertAtHead(node *&head, int data)
{
    node *temp = new node(data);
    temp->next = head;
    head = temp;
}

// Function to add Insert data at tail
void insertAtTail(node *&head, int data)
{
    node *temp = new node(data);
    if (head == NULL)
    {
        head = temp;
        return;
    }
    node *p = head;
    while (p->next != NULL)
    {
        p = p->next;
    }
    p->next = temp;
}

// Function to add data at the particular index
void insertAtTail(node *&head, int data, int index)
{
    node *temp = new node(data);
    if (index == 0)
    {
        head = temp;
        return;
    }
    node *p = head;
    while (index != 1 && p != NULL)
    {
        index--;
        p = p->next;
    }
    temp->next = p->next;
    p->next = temp;
}
// Linked List insertion after a given Node
void insertAfterNode(node *prev_node, int data)
{
    if (prev_node == NULL)
    {
        cout << "The given previous node cannot be NULL";
        return;
    }
    node *temp = new node(data);
    temp->next = prev_node->next;
    prev_node->next = temp;
}

// Search a data in a linked list
bool search(node *head, int key)
{
    node *temp = head;
    while (temp != NULL)
    {
        if (temp->data == key)
        {
            return true;
        }
        temp = temp->next;
    }
    return false;
}

int main()
{
    node *head = new node(10);
    print(head);
    insertAtHead(head, 20);
    insertAtHead(head, 30);
    print(head);
    insertAtTail(head, 89);
    insertAtTail(head, 189);
    print(head);
    insertAtTail(head, 189, 1);
    insertAtTail(head, 453, 5);
    print(head);
    if (search(head, 89))
    {
        cout << "The value found in the linked list\n";
    }
    else
    {
        cout << "The value not found in the linked list\n";
    }

    cout << "\n\n\n";
    return 0;
}