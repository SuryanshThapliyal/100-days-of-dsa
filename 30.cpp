#include <bits/stdc++.h>
using namespace std;


class Node{
public:
    int coefficient;
    int exponent;
    Node* next;

    Node(int coeff, int expo){
        coefficient = coeff;
        exponent = expo;
        next = nullptr;
    }
};

class LinkedList{
public:
    Node* head = nullptr;

    void insert(int coef, int expo){
        Node* newnode = new Node(coef, expo);
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
            cout<< temp->coefficient<< " "<<temp->exponent<<" + ";
            temp = temp->next;
        }
    }
};




int main() {
    LinkedList list;
    int n;
    cout<<"enter number of elements";
    cin>>n;
    cout<<"enter the ceoff and expo";
    int x;
    int d;
    for (int i = 0; i < n; i++)
    {
        cin>>x;
        cin>>d;
        list.insert(x, d);
    }
    list.display();
    return 0;
}