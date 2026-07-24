#include <bits/stdc++.h>
using namespace std;


class node{
public:
    int data;
    node* next;
    node* prev;

    node(int val){
        data=val;
        next=nullptr;
        prev=nullptr;
    }
};

class linkedlist{
public:
    node* head = nullptr;
    void insert(int val){
        node* newnode = new node(val);
        if(head==nullptr){
            head=newnode;
            return;
        }
        node* temp = head;
        while(temp->next!=nullptr){
            temp=temp->next;
        }
        temp->next = newnode;
        newnode->prev = temp;
    }
    void display(){
        node* temp = head;
        while(temp!=nullptr){
            cout<< temp->data<< "->";
            temp = temp->next;
        }
    }
};



int main() {
    linkedlist list;
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