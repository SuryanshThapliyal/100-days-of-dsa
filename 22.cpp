#include <bits/stdc++.h>
using namespace std;


class Node{
public:
    int data;
    Node* next;

    Node(int data){
        this->data = data;
        this->next = nullptr;
    }
};

class LinkedList{
public:
    Node* head = nullptr;
    void insert(int data){
        Node* newnode = new Node(data);
        if(head == nullptr){
            head = newnode;
            return;
        }
        Node* temp = head;
        while(temp->next!=nullptr){
            temp = temp->next;
        }
        temp->next = newnode;
        // temp = newnode;
    }
    void display(){
        Node* temp = head;
        int count=0;
        while(temp!=nullptr){
            count++;
            temp = temp->next;
        }
        cout<<count;
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