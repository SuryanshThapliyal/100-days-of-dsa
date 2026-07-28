#include <bits/stdc++.h>
using namespace std;


class node{
public:
    int data;
    node* next;

    node(int data){
        this->data = data;
        next = nullptr;
    }
};

class linkedlist{
public:
    node* head = nullptr;
    void insert(int data){
        node* newnode = new node(data);
        if(head==nullptr){
            head = newnode;
            return;
        }
        node* temp = head;
        while(temp->next!=nullptr){
            temp = temp->next;
        }
        temp->next = newnode;
    }
    node* hed(){
        return head;
    }
};


int main() {
    linkedlist list1;
    int n;
    cout<<"enter number of elements";
    cin>>n;
    cout<<"enter the elements";
    int x;
    for (int i = 0; i < n; i++)
    {
        cin>>x;
        list1.insert(x);
    }
    node* head = list1.hed();
    node* temp = head;
    if(head!=nullptr){
    while(temp!=nullptr && temp->next!=nullptr){
        temp = temp->next;
    }
    temp->next  = head;
}
    cout<<temp->next->data;
    return 0;
}