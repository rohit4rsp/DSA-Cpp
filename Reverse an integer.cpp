#include<iostream>
#include<bits/stdc++.h>
using namespace std;


int main()
{
	// 01
	
	int n = 1234;
	
	while(n!=0){
		int rev = n%10;
		n = n/10;
		cout<<rev;
	}
	
return 0;
}

