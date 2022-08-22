#include<iostream>
#include<bits/stdc++.h>
using namespace std;

void reachHome(int src, int dest){
	
	cout<<"source : "<<src<<" destination : "<<dest<<endl;
	
	if(dest == src){
		cout<<"reached home! "<<endl;
		return;
	}
	
	src++;
	
	reachHome( src , dest);
	
}

int main()
{
	
	int dest = 10;
	int src = 1;
	
	cout<<endl;
	
	reachHome(src, dest);


return 0;
}

