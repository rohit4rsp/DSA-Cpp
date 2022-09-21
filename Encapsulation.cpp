#include<iostream>
#include<bits/stdc++.h>
using namespace std;

/*                                                #  Encapsulation  #
 Encapsulation is a process of wrapping similar code in one place.
 In C++, we can bundle data members and functions that operate together inside a single class.
 For example,  
 
class Rectangle { 
	public: 
		int length; 
		int breadth; 
		int getArea() { 
		return length * breadth; 
		} 
};
*/

class Student {

    private:
        string name;
        int age;
        int height;

    public:
    int getAge() {
        return this->age;
    }
};

int main()
{

	Student first;
    cout << "Sab sahi chalra hai" << endl;


return 0;
}

