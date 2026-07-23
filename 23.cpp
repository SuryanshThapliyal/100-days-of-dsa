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
            temp=temp->next;
        }
        temp->next = newnode;
    }
    node* hed(){
        return head;
    }
};

void srt(node* head1, node* head2){
    node* temp1 =head1;
    node* temp2 =head2;
    while(temp1!=nullptr && temp2!=nullptr){
        if(temp1->data<temp2->data){
        cout<< temp1->data << "->";
        temp1=temp1->next;
        }
        else{
            cout<<temp2->data<<"->";
            temp2=temp2->next;
        }
    }
    while(temp1!=nullptr){
        cout<< temp1->data << "->";
        temp1 = temp1->next;
    }
    while(temp2!=nullptr){
        cout<< temp2->data << "->";
        temp2= temp2->next;
    }
}


int main() {
    linkedlist list1;
    linkedlist list2;
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
    cout<<"enter number of elements";
    cin>>n;
    cout<<"enter the elements";
    for (int i = 0; i < n; i++)
    {
        cin>>x;
        list2.insert(x);
    }
    node * head1= list1.hed();
    node * head2= list2.hed();
    srt(head1, head2);
    return 0;
}