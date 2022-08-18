#include<iostream>
#include<bits/stdc++.h>
using namespace std;

void bubbleSort(int arr[], int n)
{   
    for(int i=0; i<n-1 ; i++){
        
        for(int j=0; j<n-i-1 ; j++){
            if(arr[j]>arr[j+1]){
                swap(arr[j],arr[j+1]);
            }    
        }
        
    }
}

void printArray(int arr[], int n){
	for(int j = 0; j<n; j++){
		cout<<arr[j]<<" ";
    }
}

int main()
{
	
	int array1[6] = {2,3,4,1,5,33};
	bubbleSort(array1,6);
	printArray(array1,6);


return 0;
}

