#include <bits/stdc++.h>
using namespace std;

class Stack{
public:
    int* arr;
    int capacity;
    int top;
    Stack(int size){
        capacity = size;
        arr = new int(size);
        top=-1;
    }

    void push(int val){
        if(isFull()==true){
            cout<<"stack full"<<endl;
            return;
        }
        arr[++top] = val;
    }
    int pop(){
        if(isEmpty()==true){
            cout<<"stack empty"<<endl;
            return -1;
        }
        return arr[top--];
    }
    int peek(){
        if(isEmpty()==true){
            cout<<"stack empty"<<endl;
            return -1;
        }
        return arr[top];
    }
    bool isFull(){
        if(top == capacity-1){
            return true;
        }
        return false;
    }
    bool isEmpty(){
        if(top == -1){
            return true;
        }
        return false;
    }
};



int main() {
    Stack s(5);
    int c;
    int val;
    while(true){
    cout<<"enter the operation";
    cin>>c;
    switch (c)
    {
    case 1:
        cout<<"enter value";
        cin>>val;
        s.push(val);
        break;
    case 2:
        int popped;
        popped= s.pop();
        cout<<popped;
        break;
    case 3:
        int peeked;
        peeked = s.peek();
        cout<<peeked;
        break;
    case 4:
        return -1;
    default:
        break;
    }}
    return 0;
}