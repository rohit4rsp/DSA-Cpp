#include<iostream>
#include<bits/stdc++.h>
using namespace std;

int fib(int n){
	
//	f(n) = f(n-1) + f(n-2);         logic

	if(n == 0){
        return 0;
    }

    if(n == 1){
	    return 1;
    }
        
    int ans = fib(n-1) + fib(n-2);
        
    return ans;
				
}

int main()
{
	
	int a = 8;
	int answer = fib(a);
	cout<<answer<<endl;


return 0;
}

