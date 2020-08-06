#include <bits/stdc++.h>

using namespace std;

class Node{
public:
    int data;
    Node *next;
};


void append(Node **head, int data)
{
    Node* new_node = new Node();
    Node* last_node = *head;
    new_node->data = data;
    new_node->next = NULL;
    if(*head == NULL)
    {
        *head = new_node;
        return;
    }
    while(last_node->next != NULL)
        last_node = last_node-> next;
    last_node -> next = new_node;
}

int main (void)
{
    int n;
    cin >> n;
    n--;
    int k;
    cin >> k;
    append(NULL,k);
}
