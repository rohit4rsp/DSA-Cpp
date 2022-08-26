#include<iostream>
#include<bits/stdc++.h>
using namespace std;

bool isSorted( int* arr, int size){
	
	if( size==0 || size == 1){
		return true;
	}
	
	if(arr[0] > arr[1]){
		return false;
	}
	else{
		return isSorted(arr+1 , size-1);
	}
	
}

int main()
{
	
	int arr[5] = {1,2,3,4,5};
	int size = 5;
	
	int arr1[5] = {1,2,3,8,5};
	
	bool ans = isSorted(arr , size);

	bool ans2 = isSorted(arr1 , size);
		
	if(ans){
		cout<<"arr Sorted! "<<endl;
	}
	else{
		cout<<"arr Not Sorted "<<endl;
	}
	
	if(ans2){
		cout<<"arr1 Sorted! "<<endl;
	}
	else{
		cout<<"arr1 Not Sorted "<<endl;
	}


return 0;
}

