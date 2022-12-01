#include<iostream>
#include<bits/stdc++.h>
#include<queue>
using namespace std;

class node{
	public:
		int data;
		node* left;
		node* right;
		
	node(int d){
		this -> data = d;
		this -> left = NULL;
		this -> right = NULL;
	}	
};

//--------------------------------------------------------------------buildTree  recursive
node* buildTree( node* root ){
	
	cout<<"enter the data for node : "<< endl;
	int data;
	cin>>data;
	root = new node(data);
	
	if(data == -1){
		return NULL;
	}
	
	cout << "enter the data for inserting left of : " << data << endl;
	root -> left = buildTree(root -> left);
	
	cout << "enter the data for inserting right of : " << data << endl;
	root -> right = buildTree(root -> right);
	
	return root;
	
}

//-----------------------------------------------Level order traversal

void levelOrderTraversal( node* root ){
	
	queue<node*> q;
	q.push(root);
	q.push(NULL);                            //separator
	
	while( !q.empty() ){
		
		node* temp = q.front();
		q.pop();
		
		if(temp == NULL){    // old level has been traversed
			cout<<endl;  //enter to next line
			if(!q.empty()){  // queue still has some child nodes
				q.push(NULL);	
			}
		}
		
		else{			
			cout<< temp->data <<" ";
			
			if(temp->left){
				q.push(temp->left);
			}
			if(temp->right){
				q.push(temp->right);
			}
		}
	
	}
	
}

//   https://www.geeksforgeeks.org/reverse-level-order-traversal/       -> reverse order traversal


//-----------------------------------------------inorder traversal
void inorder(node* root){
//	base case
	if(root == NULL){
		return;
	}
	
	inorder(root -> left);         //L
	cout<< root -> data << " ";    //N
	inorder(root -> right);        //R
}

//-----------------------------------------------preorder traversal
void preorder(node* root){
//	base case
	if(root == NULL){
		return;
	}
	
	cout<< root -> data << " ";    //N
	preorder(root -> left);         //L
	preorder(root -> right);        //R
}

//-----------------------------------------------postorder traversal
void postorder(node* root){
//	base case
	if(root == NULL){
		return;
	}
	
	postorder(root -> left);         //L
	postorder(root -> right);        //R
	cout<< root -> data << " ";    //N
}

//-----------------------------------------------level order BUILD

void buildFromLevelOrder(node* &root){
	queue<node*> q;
	cout<<"enter the data for root : "<< endl;
	int data;
	cin>>data;
	root = new node(data);
	q.push(root);
	
	while(!q.empty()){
		node* temp = q.front();
		q.pop();
		
		cout << "enter the data left of : " << temp->data << endl;
		int leftData;
		cin >> leftData;
		
		if(leftData != -1){
			temp -> left = new node(leftData);
			q.push(temp -> left);
		}
	
		cout << "enter the data right of : " << temp->data << endl;
		int rightData;
		cin >> rightData;
		
		if(rightData != -1){
			temp -> right = new node(rightData);
			q.push(temp -> right);
		}	
		
	}
}

//--------------------------------------------------------------------------------------------------------------------------------

int main()
{
	
	node* root = NULL;
	
	buildFromLevelOrder(root);
	levelOrderTraversal(root);
//	1 3 5 7 11 17 -1 -1 -1 -1 -1 -1 -1 --> input
	
	
/*	
//	build tree
	root = buildTree(root);	
	
	cout<<endl;
	
//	1 3 7 -1 -1 11 -1 -1 5 17 -1 -1 -1          -> input

//  Level order traversal
	cout<<"Printing level order traversal : "<<endl;	
	levelOrderTraversal(root);
	
	cout<<"Printing inorder traversal : "<<endl;
	inorder(root);
	cout<<endl;
	
	cout<<"Printing preorder traversal : "<<endl;
	preorder(root);
	cout<<endl;
	
	cout<<"Printing postorder traversal : "<<endl;
	postorder(root);
	cout<<endl;
*/

return 0;
}

