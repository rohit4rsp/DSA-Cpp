#include<iostream>
#include<bits/stdc++.h>
using namespace std;

											//                       TYPE1 - Tail recursion
											
											/*int recursion(int arg){
												
												base case
												
												processing
												
												recursive relation
											}*/
											
											
											//                       TYPE2 - Head Recursion
											
											/*int recursion(int arg){
												
												base case
												
												recursive relation
												
												processing 
											}*/



int factorial( int n ){
	
	if( n==0 )
		return 1;
		
	return n * factorial(n-1);
	
}


int twoPowerN( int n ){
	
	if( n==0 )
		return 1;
		
	return 2 * twoPowerN(n-1);
	
}



void printCountingBack( int n ){
	
	if( n==0 )
		return ;
	
	cout<<n<<" ";
		
	printCountingBack(n-1);       //recursive relation
	
}



void printCountingFront( int n ){
	
	if( n==0 )
		return;
		
	printCountingFront(n-1);    //recursive relation
	
	cout<<n<<" ";

	
}

int main()
{
	
	int a = 4;
	int b = factorial(a);
	cout<<"factorial "<<a<<" = "<<b<<endl;
	
	int c = twoPowerN(a);	
	cout<<"twoPower "<<a<<" = "<<c<<endl;
	
	printCountingBack(9);
	
	cout<<endl;
	
	printCountingFront(9);
	
	


return 0;
}

