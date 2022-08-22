#include<iostream>
#include<bits/stdc++.h>
using namespace std;

//Count Ways To Reach The N-th Stairs

/*
Input: n = 1
Output: 1
There is only one way to climb 1 stair

Input: n = 2
Output: 2
There are two ways: (1, 1) and (2)

Input: n = 4
Output: 5
(1, 1, 1, 1), (1, 1, 2), (2, 1, 1), (1, 2, 1), (2, 2)
*/

int countDistinctWays(int nStairs) {
    
    if( nStairs<0 ){
        return 0;
    }
    if( nStairs==0 ){
        return 1;
    }
    
    return countDistinctWays(nStairs-1) + countDistinctWays(nStairs-2);
}


int main()
{
	
	int n = 5;
	
	int result = countDistinctWays(n);
	
	cout<< result << endl;


return 0;
}

