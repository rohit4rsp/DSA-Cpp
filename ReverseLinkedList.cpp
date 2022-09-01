#include<iostream>
#include<bits/stdc++.h>
using namespace std;

class Node{
	public:
		int data;
		Node* next;
		
		Node(int data){
			
			this -> data = data;
			this -> next = NULL;
			
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

//                                                                             Recursive method - 1

Node* reverse1(Node* &head){
	
	//base case
	if(head == NULL || head -> next == NULL){
        return head;
    }
    
    Node* chotaHead = reverse1(head -> next);        //applying recursion for rest os the list
    
    head -> next -> next = head;
    head -> next = NULL;
    
    return chotaHead;
	
}


//                                                                      Recursive method - 2
/*
void reverse2(Node* &head, Node* curr, Node* prev){
    if(curr = NULL){
        head = prev;
        return;
    }
    
    Node* forward = curr -> next;
    reverse2(head, forward, curr);
    curr -> next = prev;
}
*/



//                                                                         Iterative Method
/*
Node* reverseLL(Node* &head){
	
	if(head == NULL || head -> next == NULL){
        return head;
    }
    
    Node* prev = NULL;
    Node* curr = head;
    Node* forward = NULL;
    
    while(curr != NULL){
        forward = curr -> next;
        curr -> next = prev;
        prev = curr;
        curr = forward;
    }
    
    return prev;
	
} 
*/


void print( Node* &head){
	
	Node* temp = head;
	while( temp != NULL ){
		cout<< temp->data <<" ";
		temp = temp -> next;
	}
	cout<<"-- head : "<<head -> data;
	cout<<endl;
		
}


int main()
{
	
	Node* node1 = new Node(10);
	Node* head = node1;
	Node* tail = node1;
	
	insertAtHead(head, tail, 20);
	insertAtHead(head, tail, 30);
	insertAtHead(head, tail, 40);
	print(head);
	
	
	
	// for recursive approach 1
	cout<<"reversed LL head : ";
	cout<< reverse1(head) -> data;
	
	
	
	// for recursive approach 2
	
	/*
	Node* curr = head;
    Node* prev = NULL;
    reverse2(head, curr, prev);
    return head;
    */
	
	
	
	//for iterative method
	
	/*	
	reverseLL(head);
	
	*/
	
	
	
	
return 0;
}

