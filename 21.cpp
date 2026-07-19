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
    void display(){
        Node* temp = head;
        while(temp!=nullptr){
            cout<< temp->data<< "->";
            temp = temp->next;
        }
    }
};




int main() {
    LinkedList list;
    int n;
    cout<<"enter number of elements";
    cin>>n;
    cout<<"enter the elements";
    int x;
    for (int i = 0; i < n; i++)
    {
        cin>>x;
        list.insert(x);
    }
    list.display();
    return 0;
}