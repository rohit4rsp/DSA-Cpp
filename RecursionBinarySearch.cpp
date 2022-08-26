#include<iostream>
using namespace std;

void print(int arr[], int s, int e) {

    for(int i=s; i<=e; i++) {
        cout << arr[i] << " ";
    } cout << endl;
}

bool binarySearchR(int *arr, int s, int e , int k ) {

    //base case

    //element not found
    if(s>e)
        return false;

    int mid = s + (e-s)/2;

    //element found
    if(arr[mid] == k)
        return true;

    if(arr[mid] < k) {
        return binarySearchR(arr, mid+1, e, k);
    }
    else{
        return binarySearchR(arr, s, mid-1, k);
    }
}


int main() {

    int arr[11] = {2,4,6,10,14,18,22,38,49,55,222};
    
    
	int size = 11;

    int key = 222;

    bool result = binarySearchR(arr, 0, size-1, key);
    
    if(result){
    	cout<<"Key Present !"<<endl;
	}
	else{
		cout<<"Key absent "<<endl;
	}

    return 0;
}
