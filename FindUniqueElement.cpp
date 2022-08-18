#include<iostream>
using namespace std;

// XOR (^) ==> a xor a = 0 ; a xor 0 = a;

void findUnique(int arr[], int size){
	int ans = 0;
	
	for(int i = 0; i<size; i++){
		ans = ans^arr[i];
	}
	
	cout<< ans;
}

int main()
{
	int num[5] = {1,2,3,1,2};
	for(int i = 0; i<5; i++){
		cout<<num[i];
	}
	cout<<endl;
	
	findUnique(num,5);

return 0;
}

