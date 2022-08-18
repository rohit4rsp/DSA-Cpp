#include<iostream>
using namespace std;


int main()
{
	int n;
	cin>>n; 
	cout<<"n = "<<n<<endl;
	int i =1;
	
	while(i<=n){
		
//		space print
		int space = n-i;
		while(space){
			cout<<" "<<" ";
			space--;
		}
		
//		print star
		int j = 1;
		while(j<=i){
			cout<<"*"<<" ";
			j++;
		}
		cout<<endl;
		i=i+1;
	}

return 0;
}

