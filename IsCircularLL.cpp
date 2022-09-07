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

void insertNode(Node* &tail, int element, int d) {
    

    //empty list
    if(tail == NULL) {
        Node* newNode = new Node(d);
        tail = newNode;
        newNode -> next = newNode;
    }
    else{
        //non-empty list
        //assuming that the element is present in the list

        Node* curr = tail;

        while(curr->data != element) {
            curr = curr -> next;
        }
        
        //element found -> curr is representing element wala node
        Node* temp = new Node(d);
        temp -> next = curr -> next;
        curr -> next = temp;

    }

}    

bool circularLL(Node* head)
{
    if(head == NULL){
        return true;
    }
    
    if(head -> next == NULL){
        return false;
    }
    
    if(head -> next == head){
        return true;
    }
    
    Node* temp = head -> next;
    while( temp!=NULL && temp!=head ){
        temp = temp -> next;
    }
    
    if(temp == head){
        return true;
    }
    
    return false;
    
}

int main()
{
	
	Node* node1 = NULL;
	Node* head = node1;
	Node* tail = node1;
	
	insertNode(tail, 0, 1);
	insertNode(tail, 1, 2);
	insertNode(tail, 2, 3);
	
	bool res = circularLL(head);
	if(res){
	cout<< "the LL is circular "<<endl;
	}
	else{
	cout<< "the LL NOT circular "<<endl;		
	}


return 0;
}

