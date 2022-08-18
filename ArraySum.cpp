#include<iostream>
using namespace std;

int getSum(int arr[], int n ){
	int summ = 0;
	
	for(int i=0 ; i<n ; i++){
		summ = summ + arr[i];
	}
	return summ;
}
int main()
{
	
	int size;
	cout<<"enter size : "<<endl;
	cin>>size;
	
	int num[100];
	
	for(int i=0 ; i<size ; i++){
		cin>>num[i];
	}
	cout<<endl;
	cout<<"SUM is : "<< getSum(num,size)<<endl;



return 0;
}

