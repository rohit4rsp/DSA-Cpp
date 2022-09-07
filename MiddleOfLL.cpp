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

int getLength(Node* head){
	int len = 0;
	while(head != NULL){
		len++;
		head = head -> next;
	}
	return len;
}

Node* findMiddle(Node* head){
	
	int len = getLength(head);
	int ans = (len/2);       //will be same for even or odd list
	
	Node* temp = head;
	int count = 0;
	while( count<ans ){
		temp = temp -> next;
		count++;
	}
	
	return temp;
	
}

int main()
{
	Node* node1 = new Node(1);
	Node* head = node1;
	Node* tail = node1;
	
	insertAtHead(head, tail, 2);
	insertAtHead(head, tail, 3);
	insertAtHead(head, tail, 4);
	
	Node* res = findMiddle(head);
	cout<< res->data <<" is th mid of LL"<<endl;


return 0;
}

