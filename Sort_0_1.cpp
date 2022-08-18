#include<iostream>
using namespace std;

void printArray(int arr[], int size){
	for(int k = 0; k<size; k++){
		cout<< arr[k] <<" ";
	}
	cout<<endl;
}

void sort_0_1(int arr[],int size){
	
	int left = 0, right = size-1;
	
	while(left<right){
		
		while(arr[left]==0 && left<right ){
			left++;
		}
		while(arr[right]==1 && left<right ){
			right--;
		}
		if(left<right){
			swap(arr[left], arr[right]);
			left++;
			right--;
		}
		
	}
	
}

int main()
{
	int num[] = {1,0, 0, 1, 1, 0, 1, 0};
	
	int n = sizeof(num)/sizeof(num[0]);
	
	sort_0_1(num,n);
	printArray(num,n);


return 0;
}

