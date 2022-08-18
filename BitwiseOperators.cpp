#include<iostream>
using namespace std;


int main()
{
	
	int a = 4;
	int b = 6;
	
	cout<< "Original a : "<< a << endl;
	cout<< "Original b : "<< b << endl;
	cout<< "AND -> a & b : "<< (a&b)<< endl;
	cout<< "OR -> a | b : "<< (a|b)<< endl;
	cout<< "NOT -> ~a : "<< ~a << endl;
	cout<< "NOT -> ~b : "<< ~b << endl;
	cout<< "XOR -> a ^ b : "<< (a^b) << endl;
	
//	left shift(<<)--> a<<1 - "shift a(binary form) to left by 1 step"
//	right shift(>>)--> a<<1 - "shift a(binary form) to right by 1 step"

//  padding is always '0' when number is positive.
//  padding is decided by compiler when number is negative.  
	cout<< "left shift -> a<<1 : "<< (a<<1) << endl;
	cout<< "right shift -> a>>1 : "<< (a>>1) << endl;
	
//	++i -> increment first use later
//	i++ -> use first increment after

	int i = 10, j = 20;
	int k = i++;
	cout << "k= "<<k<<" " <<"i= "<< i << endl;
	
//	--i -> decrement first use later
//	i-- -> use first derement after
	
	int m = 1,n = 2,z,v;
	z = m++ + ++n;
	cout<< z << endl;
	v = m-- + --n; //updated values of m,n i.e, 2 and 3
	cout<< v << endl;
	
return 0;
}

