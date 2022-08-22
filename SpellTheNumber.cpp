#include<iostream>
#include<vector>
#include<bits/stdc++.h>
using namespace std;


/*
void sayDigit(int n, string arr[]) {

                                         //base case
    if(n == 0)
        return ;

    //processing 
    int digit = n % 10;
    n = n / 10;
    

                                         //recursive call
    sayDigit(n, arr);

    cout << arr[digit] << " ";

}

*/



vector<string> reverse(vector<string> v){
	
	int s = 0;
	int e = v.size()-1;
	
	while(s<e){
		swap(v[s],v[e]);
		s++;
		e--;
	}
	return v;
	
}

void print(vector<string> v) {
	
	for(int i=0; i<v.size(); i++){
		cout <<v[i]<<" ";
	}
	cout<<endl;
	
}

int main()
{
	
	string arr[10] = {"zero", "one","two","three","four","five","six","seven","eight","nine"};
	
	int n;
	cout<<"enter the number : "<<endl;
	cin>>n;
	cout<<endl;
	
	vector<string> res;
	
	while(n != 0){
			
		int p = n%10;
		cout<<p<<" "<<endl;
		
		n = n/10;
		
		res.push_back(arr[p]);
						
	}
	
	vector<string> ans = reverse(res);
	
	cout<<"Printing Reverse : ";
	print(ans);

return 0;
}

