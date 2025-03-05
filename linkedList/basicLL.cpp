#include<bits/stdc++.h>
using namespace std;

class Node {
public:
    int data; //data store karega
    Node *next; //next node ka address store karega
    
    Node(int val){
        data=val; 
        next=NULL;
    }
};
void insertAtHead(Node* &head){
    int val;
    cout<<"Enter the value: ";
    cin>>val;
    Node* n= new Node(val);
    n->next=head;
    head=n;
}