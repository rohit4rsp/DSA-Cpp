#include<iostream>
#include<bits/stdc++.h>
using namespace std;

//POINTER --> Stores address

int main()
{
	
	int num = 5;
	cout<<num<<endl;
	
//	Address of operator --- &
	cout<< "Address of num is : "<< &num << endl;
	cout<<endl;
	
	
	int *p = &num;
	cout<< p <<endl;     //returns address
	cout<< *p <<endl;    //returns value -- dereference operator(*)
	cout<<endl;
	
	cout<<"size of int : "<<sizeof(num)<<endl;
	cout<<"size of pointer : "<<sizeof(p)<<endl;
	cout<<endl;
	
	
	int n = 66;
	int *ptr = 0;
	ptr = &n;
	cout<< ptr <<endl;
	cout<< *ptr <<endl;
	cout<< ++(*ptr)<<endl;
	cout<<endl;


	
	char ch = 'r';
	char *c = &ch;
	cout<< c <<endl;
	cout<< *c <<endl;
	cout<<"size of pointer char : "<<sizeof(c)<<endl;
	cout<<endl;

	
	double db = 4.8;
	double *d = &db;
	cout<< d <<endl;
	cout<< *d <<endl;
	cout<<"size of pointer double : "<<sizeof(d)<<endl;
	cout<<endl;
	
	
	cout<<"simply initialized pointer v"<<endl;
	int *v;
	cout<<v<<endl;   //no output
	cout<<*v<<endl;
	cout<<endl;


	cout<<"copy pointer z of d: "<<endl;
	double *z = d;  //copy pointer
	cout<<z<<endl;   
	cout<<*z<<endl;
	cout<<endl;
	
//	IF we put ptr = ptr+1 ---> then moves to next location ~  eg: address of int = 100 then next is 104 !!

//	p = p+1;
//	cout<< p <<endl;
	


return 0;
}

