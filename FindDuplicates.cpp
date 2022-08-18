#include<iostream>
using namespace std;

int main()
{
	int num[10] = {1,2,3,4,5,6,7,8,9,9};
	for(int i = 0; i<10; i++){
		cout<<num[i];
	}
	cout<<endl;
	
	int ans = 0;
	for(int i = 0; i<10; i++){
		ans = ans^num[i];
	}
	for(int i = 1; i<10; i++){
		ans = ans^i;
	}
	cout<<ans;
	
return 0;
}
