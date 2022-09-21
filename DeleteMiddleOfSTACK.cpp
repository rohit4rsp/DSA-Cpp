#include<iostream>
#include<bits/stdc++.h>
using namespace std;

void deleteMiddle(stack<int>&inputStack, int N){

  // Write your code here
   int m = N/2;

	stack <int> s;
	int popedstack = 0;
	int p =0;
	for (int i = 1 ; i<=m; i++){      
	    popedstack = inputStack.top();
	    inputStack.pop();
	    s.push(popedstack);
	     
	}
	inputStack.pop();
	for (int i = 1 ; i<=m; i++){
	      
	    p=s.top();
	    s.pop();
		inputStack.push(p);
	     
	}
}

int main()
{


return 0;
}

