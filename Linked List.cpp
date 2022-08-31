#include<iostream>
#include<bits/stdc++.h>
using namespace std;

/*

  A linked list is a collection of nodes that contain a data part and a next pointer that contains the memory address of the next element in the list.
  The last element in the list has its next pointer set to NULL, thereby indicating the end of the list.
  The first element of the list is called the Head.

*/
//------------------------------------------------------------------------------------------------------------------------------------------------

class Node{
	public:
		int data;
		Node* next;    // pointer of node type
//		                                  _____________________
//                                       |___data___|___NULL___|

//		Constructor
		Node( int data ){
			
			this -> data = data;        // To access members of a structure through a pointer, use the arrow operator.
			this -> next = NULL;
			
		}
		
//		Destructor
		~Node(){
			int value = this -> data;
//			memory free
			if( this -> next != NULL ){
				delete next;
				this -> next = NULL;
			}
			cout<< "memory freed for node with data : "<< value << endl;
			cout<<endl;
		}
		
};

//------------------------------------------------------------------------------------------------------------------------------------------------

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

//------------------------------------------------------------------------------------------------------------------------------------------------

void insertAtTail( Node* &head, Node* &tail, int d ) {      // Tail
	
	if(tail == NULL){
		Node* temp = new Node(d);
		tail = temp;
		head = temp;
	}
	else{
		//new Node Create
		Node* temp = new Node(d);
		tail -> next = temp;
		tail = temp;
	}
		
}

//------------------------------------------------------------------------------------------------------------------------------------------------

void insertAtPosition( Node* &head , Node* &tail, int position, int d){
	
	if( position == 1 ){
		insertAtHead(head,tail,d);
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
	temp -> next = nodeToInsert;
		
}

//------------------------------------------------------------------------------------------------------------------------------------------------

void deleteNode(int position, Node* &head, Node* &tail){
	
//	deleting first node
	if(position == 1){
		Node* temp = head;
		head = head -> next;
//		memory free of start node
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
       
        
		current -> next = NULL;
		delete current;
		
	}
	
}

//------------------------------------------------------------------------------------------------------------------------------------------------

void print( Node* &head){
	
	Node* temp = head;
	while( temp != NULL ){
		cout<< temp->data <<" ";
		temp = temp -> next;
	}
	cout<<endl;
		
}

//------------------------------------------------------------------------------------------------------------------------------------------------
//------------------------------------------------------------------------------------------------------------------------------------------------

int main()
{
	
//	Create a new node
	
	Node* node1 = new Node(10);         //creating object from heap in runtime
	cout<<"head : ";
	cout<< node1 -> data << endl;
	cout<<"node1->next = #null : ";
	cout<< node1 -> next << endl;
	cout<<endl;
	
//	head pointed to node1
	Node* head = node1;
	
//	tail pointed to node1
	Node* tail = node1;

//------------------------------------------------------------------------------------------------------------------------------------------------
	
	insertAtHead(head, tail, 7);
	insertAtHead(head, tail, 5);
	cout<<"inserted at head : "<<endl;
	print(head);
	cout<<endl;
//------------------------------------------------------------------------------------------------------------------------------------------------
	
	insertAtTail(head, tail, 12);
	insertAtTail(head, tail, 15);
	cout<<"inserted at tail : "<<endl;
	print(head);
	cout<<endl;
//------------------------------------------------------------------------------------------------------------------------------------------------
	
	int position = 3;
	insertAtPosition(head, tail, position, 9);
	cout<<"inserted at position "<< position <<" : "<<endl;
	print(head);
	cout<<endl;
	
	int position1 = 1;
	insertAtPosition(head, tail, position1, 3);
	cout<<"inserted at position "<< position1 <<" : "<<endl;
	print(head);
	cout<<endl;
	
	int position2 = 8;
	insertAtPosition(head, tail, position2, 18);
	cout<<"inserted at position "<< position2 <<" : "<<endl;
	print(head);
	cout<<endl;
		
	cout<<"new head - "<< head -> data << endl;
	cout<<"new tail - "<< tail -> data << endl;
	cout<<endl;
	
	int position3 = 9;
	insertAtPosition(head, tail, position3, 20);
	cout<<"inserted at position "<< position3 <<" : "<<endl;
	print(head);
	cout<<endl;
		
	cout<<"new head - "<< head -> data << endl;
	cout<<"new tail - "<< tail -> data << endl;
	cout<<endl;
//------------------------------------------------------------------------------------------------------------------------------------------------
	
	int pos1 = 3;
	deleteNode(pos1, head, tail);
	cout<<"deleted at position "<< pos1 <<" : "<<endl;
	print(head);
	cout<<endl;
		
	cout<<"new head - "<< head -> data << endl;
	cout<<"new tail - "<< tail -> data << endl;
	cout<<endl;
	
	int pos2 = 1;
	deleteNode(pos2, head, tail);
	cout<<"deleted at position "<< pos2 <<" : "<<endl;
	print(head);
	cout<<endl;
		
	cout<<"new head - "<< head -> data << endl;
	cout<<"new tail - "<< tail -> data << endl;
	cout<<endl;

	int pos3 = 7;
	deleteNode(pos3, head, tail);
	cout<<"deleted at position "<< pos3 <<" : "<<endl;
	print(head);
	cout<<endl;
		
	cout<<"new head - "<< head -> data << endl;
	cout<<"new tail - "<< tail -> data << endl;
	cout<<endl;	

return 0;

}
