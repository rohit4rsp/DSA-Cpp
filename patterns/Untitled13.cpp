#include<iostream>
#include<string>
using namespace std;

int main(){
	
	int n ;
	cin>>n;
	cout<<"n = "<<n<<endl;
	char start = 'A';
	
	
	int i=0;
	while(i<=n){
		int j =1;
		
		while(j<=n){
			cout<< start;
			j++;
			start++;
		}
		cout<<endl;
		i++;
	}
	
	return 0;
}
