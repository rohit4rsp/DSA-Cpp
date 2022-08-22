#include<iostream>
#include<bits/stdc++.h>
using namespace std;


int main()
{

	int arr[10] = {1,4,5};
	cout<<"address of first block in array is - arr : "<<arr<<endl;
	cout<<"address of first block is &arr[0]: "<< &arr[0] <<endl;
	cout<<"*arr = "<< *arr <<endl;
	cout<<"*arr+1 = "<< *arr+1 <<endl;
	cout<<"*(arr+1) = "<< *(arr+1) <<endl;
	cout<<endl;
	
	
	
	int i = 2;
	cout<< i[arr]<<endl; 
//	arr[i] = *(arr+i)     OR       i[arr] = *(i+arr)                       ------------- functioning IMP
	cout<<endl;
	
	
	
	int arr1[10];

//ERROR
   //arr = arr+1;

    int *ptr = &arr1[0];
    cout << ptr << endl;
    cout<< &ptr <<endl;
    ptr = ptr + 1;
    cout << ptr << endl;
    cout<<endl;




	int arr2[5] = {1,2,3,4,5};
    char ch[6] = "abcde";             // char array ends with null character


    cout << arr2 << endl;
    //attention here
    cout << ch << endl;           //  cout behaves different for array and char
    
    char *c = &ch[0];
    //prints entire string
    cout << c << endl;       // prints full char string
    cout<<*c<<endl;

    char temp = 'z';
    char *p1 = &temp;  // prints z and beyond until null character 

    cout << p1 << endl;  
	cout << *p1 << endl;

	
return 0;
}

