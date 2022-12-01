/*	A queue is defined as a linear data structure that is open at both ends and 
	the operations are performed in First In First Out (FIFO) order.               */

#include<iostream>
#include<bits/stdc++.h>
#include<queue>
using namespace std;


int main()
{
	
//	# STL

	queue<int> q;
	
	q.push(1);
	q.push(2);
	q.push(3);
	q.push(4);
	q.push(5);
	cout<<q.size()<<endl;
	cout<<"front : "<<q.front()<<endl;
	cout<<endl;
	
	q.pop();
	cout<<"after 1st pop size: "<<q.size()<<endl;
	cout<<"front : "<<q.front()<<endl;
	cout<<endl;
	
	if(q.empty()){
		cout<<"queue is empty"<<endl;
	}
	else{
		cout<<"queue is NOT empty"<<endl;
	}
	cout<<endl;


return 0;
}

