#include<iostream>
#include<bits/stdc++.h>
#include<string>
using namespace std;

void reverse(string& str, int i, int j){
	
	if(i>j){
		return;
	}
	
	swap(str[i], str[j]);
	j--;
	i++;
	
	reverse(str , i , j);	
}

void print(string str){
	for(int i = 0; i<str.length(); i++){
		cout<<str[i];
	}
	cout<<endl;
}

int main()
{
	
	string name = "rohit";
	
	cout<<name<<endl;
	
	reverse(name, 0, name.length()-1);
		
	print(name);
	


return 0;
}

