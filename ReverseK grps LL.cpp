#include<iostream>
#include<bits/stdc++.h>
using namespace std;

class Node
{
    public:
        int data;
        Node *next;
        Node(int data)
        {
            this->data = data;
            this->next = NULL;
        }
};

void insertAtHead( Node* &head, Node* &tail, int d ) {      // reference taken to avoid copy  - Head
	
	if(head == NULL){
		Node* temp = new Node(d);
		head = temp;
		tail = temp;
	}
	else{
		//new Node Create
		Node* temp = new Node(d);
		temp -> next = head;
		head = temp;
	}
}


Node* kReverse(Node* head, int k) {
    //base call
    if(head == NULL) {
        return NULL;
    }
    
    //step1: reverse first k nodes
    Node* next = NULL;
    Node* curr = head;
    Node* prev = NULL;
    int count= 0;
    
    while( curr != NULL && count < k ) {
        next = curr -> next;
        curr -> next = prev;
        prev = curr;
        curr = next;
        count++;
    }
    
    //step2: Recursion dekhlega aage ka 
    if(next != NULL) {
        head -> next = kReverse(next,k);
    }
    
    //step3: return head of reversed list
    return prev;
}


int main()
{
	Node* node1 = new Node(1);
	Node* head = node1;
	Node* tail = node1;
	
	insertAtHead(head, tail, 2);
	insertAtHead(head, tail, 3);
	insertAtHead(head, tail, 4);
	
	Node* res = kReverse(head, 2);
	cout<< res->data <<" is head of k grp reversed of LL"<<endl;

return 0;
}

