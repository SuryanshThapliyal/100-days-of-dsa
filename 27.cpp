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


void findintersection(node* head1, node* head2){
    node* temp1 = head1;
    node* temp2 = head2;
    while(temp1!=temp2){
        if(temp1==nullptr){
            temp1 = head2;
        }
        else
        temp1 = temp1->next;
        if(temp2 == nullptr){
            temp2 = head1;
        }
        else
        temp2 = temp2->next;
    }
    if(temp1==nullptr){
        cout<<"no intersection";
    }
    else
    cout<< temp1->data;
}



int main() {
    linkedlist list1;
    linkedlist list2;
    node* newnode1 = new node(1);
    node* newnode2 = new node(5);
    newnode1->next = newnode2;
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
    cout<<"enter the elements";
    for (int i = 0; i < n; i++)
    {
        cin>>x;
        list2.insert(x);
    }
    node* head1 = list1.hed();
    node* head2 = list2.hed();
    node* temp1 = head1;
    node* temp2 = head2;
    while(temp1->next!=nullptr){
        temp1 = temp1->next;
    }
    temp1 -> next = newnode1;
    while(temp2->next!=nullptr){
        temp2 = temp2->next;
    }
    temp2 -> next = newnode1;
    

    findintersection(head1, head2);
    return 0;
}