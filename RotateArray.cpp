#include <iostream>
#include<vector>
#include<bits/stdc++.h>
using namespace std;

int rotate(int nums[], int size, int k) {
        
    vector<int> temp(size);
        
    for(int i = 0; i<size; i++){
    	temp[(i+k)%size] = nums[i];
    }
        
    return temp;
        
}

void print(int nums[], int size) {
	
	for(int i=0; i<nums.size(); i++){
		cout <<nums[i]<<" ";
	}
	cout<<endl;
	
}
    
    

int main() {
    
    int arr[5] = {1,2,3,4,5};
    
    int k = 3;
    
    cout<<"rotated by k = "<<k<<" is : "<<endl;
    rotate(arr,5 ,k);
    print(v, 5);

    return 0;
}
