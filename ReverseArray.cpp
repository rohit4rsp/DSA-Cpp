#include<iostream>
using namespace std;

void reverse(int arr[],int size){
	
	int start = 0;
	int end = size-1;
	
	while(start<=end){
		swap(arr[start], arr[end]);            //SWAP FUNCTION BUILT-IN
		start++;
		end--;
	}
	
}


void printArray(int arr[], int size){
	for(int i=0; i<size; i++){
		cout <<arr[i]<<" ";
	}
	cout<<endl;	
}


int main()
{
	int num1[6] = {1,2,3,4,5,6};
	int num2[5] = {11,12,13,14,15};
	
	reverse(num1,6);
	reverse(num2,5);
	
	printArray(num1,6);
	printArray(num2,5);

return 0;
}

