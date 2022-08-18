#include<iostream>
#include<string>
using namespace std;


int main()
{
	int a = 65;
//	cout<<char(a+1);
	
	int n;
	cin>>n; 
	cout<<"n = "<<n<<endl;
	int i =1;
	
	while(i<=n){
		int j = 1;
		
		while(j<=n){
			cout<<char(a)<<" ";
			j=j+1;
		}
		a++;
		cout<<endl;
		i=i+1;
	}

return 0;
}

