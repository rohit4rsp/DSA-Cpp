
//          ------ BINARY_SEARCH ------(arrays should be monotonic) -----> O(logN)

#include<iostream>
#include<bits/stdc++.h>
using namespace std;

int binarySearch(int arr[], int size, int key){
	
	int start = 0;
	int end = size - 1;
	
	int mid = start +(end-start)/2;    //adjusting for integer range
	
	while( start<=end ){
		
		if(arr[mid] == key){
			return mid;
		}
		
//		go to right part
		if( key > arr[mid] ){
			start = mid+1;
		}
//		go to left part
		else{
			end = mid-1;
		}
		
		mid = start +(end-start)/2;
		
	}
	
	return -1;
	
}



int main()
{
	
	int even[6] = {2,4,6,8,12,18};
	int odd[5] = {3,8,11,14,16};
	
	int indexEven = binarySearch( even, 6, 12 );
	cout<<"index at which your key 12 is : "<<indexEven<<endl;
	
	int indexOdd = binarySearch( odd, 5, 14 );
	cout<<"index at which your key 14 is : "<<indexOdd<<endl;
	
	
return 0;
}

