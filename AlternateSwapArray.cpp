#include<iostream>
using namespace std;

void reverseAlternate(int arr[],int size){
	int i;
	if(size%2==0){
		while(i+1<size){
		swap(arr[i], arr[i+1]);            //SWAP FUNCTION BUILT-IN
		i = i +2;
		}
	}
	else{
		while(i<size-1){
		swap(arr[i], arr[i+1]);            //SWAP FUNCTION BUILT-IN
		i = i +2;
		}	
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
	
	reverseAlternate(num1,6);
	printArray(num1,6);
	
	cout<<endl;
	
	reverseAlternate(num2,5);
	printArray(num2,5);

return 0;
}

