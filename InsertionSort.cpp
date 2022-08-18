#include<iostream>
#include<bits/stdc++.h>
using namespace std;

void insertionSort(int n,int arr[]){
    for(int i=1; i<n ; i++){
        int temp = arr[i];
        int j =i-1;
        for(; j>=0; j--){
            
            if(arr[j]>temp){
                //shift
                arr[j+1] = arr[j];
            }
            else{
                break;
            }
            
        }
        arr[j+1] = temp;
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
	insertionSort(6, array1);
	printArray(array1, 6);


return 0;
}

