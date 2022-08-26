#include<iostream>
#include<string>
#include<bits/stdc++.h>
using namespace std;

bool checkPalindrome(string str, int i, int j){
	
	if(i>j){
		return true;
	}
	
	if(str[i] != str[j]){
		return false;
	}
	else{
		return checkPalindrome(str , ++i, --j);
	}
	
}

int main()
{
	
	string name = "babbab";
	cout<<name<<endl;
	
	bool isPalindrome = checkPalindrome(name, 0, name.length()-1);
	
	if(isPalindrome){
		cout<<"Is a Palindrome"<<endl;
	}
	else{
		cout<<"Is not a Palindrome"<<endl;	
	}


return 0;
}

