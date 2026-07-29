#include <bits/stdc++.h>
using namespace std;


class Node{
public:
    int data;
    Node* next;

    Node(int value){
        data = value;
        next = nullptr;
    }
};

class LinkedList{
public:
    Node* head = nullptr;

    void insert(int value){
        Node* newnode = new Node(value);
        if(head == nullptr){
            head = newnode;
            return;
        }
        Node* temp = head;
        while(temp->next!=nullptr){
            temp = temp->next;
        }
        temp->next = newnode;
    }
    void display(Node* head){
        Node* temp = head;
        while(temp!=nullptr){
            cout<< temp->data<< "->";
            temp = temp->next;
        }
    }
    Node* hed(){
        return head;
    }
};

Node* rotatebyk(Node* head, int k, int size){
    int i = size-k-1;
    Node* temp = head;
    Node* prev = head;
    while(i>0){
        prev = prev->next;
        i--;
    }
    temp = prev->next;
    while(temp->next!=nullptr){
        temp= temp->next;
    }
    temp->next = head;
    head = prev->next;
    prev->next = nullptr;

    return head;
}


int main() {
    LinkedList list;
    int n;
    int k=2;
    cout<<"enter number of elements";
    cin>>n;
    cout<<"enter the elements";
    int x;
    for (int i = 0; i < n; i++)
    {
        cin>>x;
        list.insert(x);
    }
    Node* head = list.hed();
    head = rotatebyk(head, k, n);
    list.display(head);
    return 0;
}