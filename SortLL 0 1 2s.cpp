#include<iostream>
#include<bits/stdc++.h>
using namespace std;


//                                      #  sort lL 0s 1s and 2s  #
/*

Node* sortList(Node *head)
{
    int zC = 0;
    int oC = 0;
    int tC = 0;
    
    Node* temp = head;
    
    while( temp != NULL ){
        if( temp -> data == 0 ){
            zC++;
        }
        else if( temp -> data == 1 ){
            oC++;
        }
        else if( temp -> data == 2 ){
            tC++;
        }
        temp = temp -> next;
    }
    
    temp = head;
    while( temp != NULL ){
        if( zC != 0 ){
            temp -> data = 0;
            zC--;
        }
        else if( oC != 0 ){
            temp -> data = 1;
            oC--;
        }
        else if( tC != 0 ){
            temp -> data = 2;
            tC--;
        }
        temp = temp -> next;
    }
    
    return head;
}


*/


//                                                    # approach 2 #

void insertAtTail( Node* &tail, Node* curr){
	
	tail -> next = curr;
	tail = curr;
	
}

Node* sortlist(Node* head){
	
//	creating 3 dummy ll  ...................  for 0s , 1s and 2s
	Node* zeroHead = new Node(-1);
	Node* zeroTail = zeroHead;
	
	Node* oneHead = new Node(-1);
	Node* oneTail = oneHead;
	
	Node* twoHead = new Node(-1);
	Node* twoTail = twoHead;
	
	Node* curr = head;
	
	while( curr != NULL ){
		
		int value = curr -> data;
		
		if( value == 0){
			insertAtTail( zeroTail, curr );
		}
		else if( value == 1){
			insertAtTail( oneTail, curr );
		}
		else if( value == 2){
			insertAtTail( twoTail, curr );
		}
		curr = curr -> next;
	}
	
//	merging all three LL
	if ( oneHead -> next != NULL ){
		zeroTail -> next = oneHead -> next;
	}
	else{
		zeroTail -> next = twoHead -> next;
	}
	
}



int main()
{


return 0;
}

