#include<iostream>
using namespace std;


int main()
{
	int n;
	cin>>n; 
	cout<<"n = "<<n<<endl;
	int i =1;
	char ch = 'D';
	
	while(i<=n){
		int j = 1;
		char value = ch;
		while(j<=i){
			cout<<value<<" ";
			j=j+1;
			value++;
		}
		ch--;
		cout<<endl;
		i=i+1;
	}

return 0;
}

