#include<iostream>
#include<vector>
#include<bits/stdc++.h>
using namespace std;


int firstOcc(int arr[], int n, int key) {

    int s = 0, e = n-1;
    int mid = s + (e-s)/2;
    int ans = -1;
    while(s<=e) {

        if(arr[mid] == key){
            ans = mid;
            e = mid - 1;
        }
        else if(key > arr[mid]) {//Right me jao
            s = mid + 1;
        }
        else if(key < arr[mid]) {//left me jao
            e = mid - 1;
        }

        mid = s + (e-s)/2;
    }
    return ans;
}

int lastOcc(int arr[], int n, int key) {

    int s = 0, e = n-1;
    int mid = s + (e-s)/2;
    int ans = -1;
    while(s<=e) {

        if(arr[mid] == key){
            ans = mid;
            s = mid + 1;
        }
        else if(key > arr[mid]) {//Right me jao
            s = mid + 1;
        }
        else if(key < arr[mid]) {//left me jao
            e = mid - 1;
        }

        mid = s + (e-s)/2;
    }
    return ans;
}



int main()
{
	
	int arr1[9] = {1,2,3,4,4,4,4,4,5};
	int key = 4;
    int index1 = firstOcc(arr1,9, key);
    int index2 = lastOcc(arr1,9, key);
    
    cout<<"total no of occurences of "<<key<<" is : "<<(index2 - index1)+1;

return 0;
}

