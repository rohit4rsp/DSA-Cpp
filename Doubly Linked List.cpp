#include<iostream>
#include<bits/stdc++.h>
using namespace std;

/*
  Doubly linked list is a type of data structure that is made up of nodes that are created using self referential structures.
  Each of these nodes contain three parts, namely the data and the reference to the next list node and the reference to the previous list node.
*/

class Node{
	public:
		int data;
		Node* prev;
		Node* next;
		
		//constructor
		Node( int d ){
			this -> data = d;
			this -> prev = NULL;
			this -> next = NULL;
		}
		
		//Destructor
		~Node(){
			int value = this -> data;
			if(next != NULL){
				delete next;
				next = NULL;
			}
			cout<<"memory free for data : "<<value<<endl;
		}
		
};
//------------------------------------------------------------------------------------------------------------------------------------------------

void print(Node* &head){
	
	Node* temp = head;
	
	while(temp != NULL){
		cout<< temp -> data<<" ";
		temp = temp -> next;
	}
	cout<< endl;
	
}
//------------------------------------------------------------------------------------------------------------------------------------------------

int getLength(Node* head){
	int length = 0;
	Node* temp = head;
	
	while(temp != NULL){
		length++;
		temp = temp -> next;
	}
	return length;
}
//------------------------------------------------------------------------------------------------------------------------------------------------

void insertAtHead( Node* &head, Node* &tail, int d){
	
	if(head == NULL){
		Node* temp = new Node(d);
		head = temp;
		tail = temp;
	}
	else{
		Node* temp = new Node(d);
		temp -> next = head;
		head -> prev = temp;
		head = temp;
	}
		
}
//------------------------------------------------------------------------------------------------------------------------------------------------

void insertAtTail( Node* &head, Node* &tail, int d){
	
	if(tail == NULL){
		Node* temp = new Node(d);
		tail = temp;
		head = temp;
	}
	else{
		Node* temp = new Node(d);
		tail -> next = temp;
		temp -> prev = tail;
		tail = temp;
	}
		
}

//------------------------------------------------------------------------------------------------------------------------------------------------
void insertAtPosition( Node* &head , Node* &tail, int position, int d){
	
	if( position == 1 ){
		insertAtHead(head, tail, d);
		return;
	}
	
	Node* temp = head;
	int count = 1;
	
	while( count < position-1 ){       // shifting till (position-1)
		temp = temp -> next;
		count++;
	}
	
//	inserting at last position
	if( temp -> next  == NULL ){
		insertAtTail(head, tail,d);
		return;	
	}
		
//	node to insert at position
	Node* nodeToInsert = new Node(d);
	
	nodeToInsert -> next = temp -> next;
	temp -> next -> prev = nodeToInsert;
	temp -> next = nodeToInsert;
	nodeToInsert -> prev = temp; 
		
}
//------------------------------------------------------------------------------------------------------------------------------------------------

void deleteNode(int position, Node* &head, Node* &tail){
	
//	deleting first node
	if(position == 1){
		Node* temp = head;
//		memory free of start node
		head = temp -> next;        //OR         //temp -> next -> prev = NULL;
		head -> prev = NULL;       //OR          //head = temp -> next;
        temp -> next = NULL;
		delete temp;
	}
	else{
//		deleting any and last node
		Node* current = head;
		Node* previous = NULL;
		
		int count = 1;
		while( count < position ){
			previous = current;
			current = current -> next;
			count++;
		}
		
	//		rectifying tail node
		if(current -> next == NULL){
			previous -> next = current -> next;
            tail = previous;
        }
        else{
            previous -> next = current -> next;
        }
       
		current -> prev = NULL;
		previous -> next = current -> next;
		current -> next = NULL;
		delete current;
		
	}
	
}

//------------------------------------------------------------------------------------------------------------------------------------------------
//------------------------------------------------------------------------------------------------------------------------------------------------

int main()
{
	
//	Node* node1 = new Node(10);
	Node* head = NULL;
	Node* tail = NULL;
	
	print(head);
	
	cout<<"length : "<<getLength(head);
	cout<<endl;
//-----------------------------------------------------------------
	cout<<endl;
	cout<<"inserted at head ----"<<endl;	
	insertAtHead(head, tail, 11);
	insertAtHead(head, tail, 13);
	insertAtHead(head, tail, 15);
	
	print(head);
	cout<<"new length : "<<getLength(head);
	cout<<endl;
//----------------------------------------------------------------
	cout<<endl;
	cout<<"inserted at tail ------"<<endl;
	insertAtTail(head, tail, 9);
	insertAtTail(head, tail, 7);
	insertAtTail(head, tail, 5);
		
	print(head);
	cout<<"new length : "<<getLength(head);
	cout<<endl;
//----------------------------------------------------------------
	cout<<endl;
	insertAtPosition( head , tail, 4, 40);
	insertAtPosition( head , tail, 6, 60);
	
	print(head);
	cout<<"new length : "<<getLength(head);
	cout<<endl;
	cout<<"new head : "<<head -> data<<endl;
	cout<<"new tail : "<<tail -> data<<endl;
//----------------------------------------------------------------
	cout<<endl;
	deleteNode( 1, head, tail);
	print(head);
	cout<<"new length : "<<getLength(head);
	cout<<endl;
	cout<<"new head : "<<head -> data<<endl;
	cout<<"new tail : "<<tail -> data<<endl;
	
	cout<<endl;
	deleteNode( 7, head, tail);
	print(head);
	cout<<"new length : "<<getLength(head);
	cout<<endl;
	cout<<"new head : "<<head -> data<<endl;
	cout<<"new tail : "<<tail -> data<<endl;


return 0;
}

