#include<iostream>
#include<bits/stdc++.h>
#include<vector>
using namespace std;

bool checkPalindrome(vector<int> arr, int i, int j){
        
    if(i>j){
	    return true;
   	}
    	
   	if(arr[i] != arr[j]){
   		return false;
   	}
   	else{
   		return checkPalindrome(arr , ++i, --j);
   	}
    	
}
    //Function to check whether the list is palindrome.
bool isPalindrome(Node *head)
{
        
    vector<int> arr;
    Node* temp = head;
    while(temp != NULL){
        arr.push_back(temp -> data);
        temp = temp -> next;
    }
        
    return checkPalindrome(arr, 0, arr.size()-1);
        
}

int main()
{


return 0;
}

