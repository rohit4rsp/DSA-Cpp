#include<iostream>
#include<bits/stdc++.h>
using namespace std;


int main()
{
	int n;
	cin>>n;
	int ans = 0;
	int i = 0;
	while(n != 0){
		
		int bit = n & 1;         // imp
		cout<<"bit = "<<bit<<endl;
		ans = (pow(10,i) * bit) + ans;
		i++;
		n = n >> 1;
	}
	cout << ans << endl;
	
//	approach 2

//	int n;
//	cin>>n;
//	int ans = 0;
//	int i = 0;
//	while(n != 0){
//		
//		int bit = n & 1;
//		cout<<"bit = "<<bit<<endl;
//		ans = (10 * ans) + bit;
//		i++;
//		n = n >> 1;
//	}
//	cout << ans << endl; 

return 0;
}

