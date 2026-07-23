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
        while(temp!=nullptr){
            cout<<temp->data<<"->";
            temp = temp->next;
        }
    }
    void del(int num){
        if(head->data == num){
            head=head->next;
            return;
        }
        Node* temp = head->next;
        Node* prev = head;
        while(temp!=nullptr){
            if(temp->data == num){
                prev->next = temp->next;
                return;
            }
            temp = temp->next;
            prev = prev->next;
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
    int num;
    cout<<"enter number to delete";
    cin>>num;
    list.del(num);
    list.display();
    return 0;
}