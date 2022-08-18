#include<iostream>
#include<bits/stdc++.h>
using namespace std;

void selectionSort(int arr[], int n)
{   
    for(int i = 0; i<n-1; i++){
        int minIndex = i;
        for(int j =minIndex+1; j<n; j++){
            if(arr[minIndex]>arr[j])
                minIndex = j;
        }
        swap(arr[minIndex],arr[i]);
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
	selectionSort(array1,6);
	printArray(array1,6);

return 0;
}

