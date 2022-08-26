#include<iostream>
#include<bits/stdc++.h>
using namespace std;

int getSum( int* arr, int size){
	
	if( size==0 ){
		return 0;
	}
	
	if(size == 1){
		return arr[0];
	}
	
	return  arr[0] + getSum(arr+1,size-1);         //passed pointer array for arr+1 functionality
	
}

int main()
{
	
	int arr[5] = {11,21,31,41,51};
	int size = 5;
	
	
	int ans = getSum(arr , size);
	
	cout<<ans<<endl;


return 0;
}

