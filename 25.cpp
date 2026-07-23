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
    void find(int key){
        int count = 0;
        node* temp = head;
        while(temp!=nullptr){
            if(temp->data == key){
                count++;
            }
            temp = temp->next;
        }
        cout<<count;
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
    cout<<"enter the number to find";
    cin>>n;
    list.find(n);
    return 0;
}