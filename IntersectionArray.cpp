#include<iostream>
#include<vector>
#include<bits/stdc++.h>
using namespace std;


int main()
{
	int array1[] = {1, 5, 7, 8, 8, 11};
	
	int array2[] = {1, 5, 3, 4, 5, 6, 7, 8};
	
	for(int i = 0 ; i<6 ; i++){
		int ele  = array1[i];
		
		for(int j = 0 ; j<8 ; j++){
			if(ele==array2[j]){
				cout<<ele<<" ";
				array2[j] = INT_MIN;
				break;
			}
		}
	}


return 0;
}

