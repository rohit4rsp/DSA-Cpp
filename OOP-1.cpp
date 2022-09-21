#include<iostream>
#include<bits/stdc++.h>
using namespace std;

/*
//                                                        CLASS

	A class is a way of organizing information about a type of data so a programmer can reuse elements when making multiple 
	instances of that data type—for example, if a programmer wanted to make three instances of Car , 
	maybe a BMW, a Ferrari, and a Ford instance
	
*/

class Hero{
	
//	properties                            ...by default private
	public:
	char *name;
	int health;
	char level;
	
	Hero(){
		cout<<"default constructor called !"<<endl;       //called when object created, no parameters, no return type
		name = new char[100];
	}
	
	
	//parameterized constructor
	Hero(int h){
		this -> health = h;
	}
	
	Hero(int h, char L){
//                                                    #this stores address of current object
		this -> health = h;
		this -> level = L;	
	}
	
	
	
	//Copy Constructor       ..... if we construct our own default copy constructor gets deleted
	
	Hero( Hero &temp ){              //pass by value
		
		char *ch = new char[strlen(temp.name) + 1];
		strcpy(ch, temp.name);
		this -> name = ch;
		
		this -> health = temp.health;
		this -> level = temp.level;
	}
	
//	                                            getter()
	int getHealth(){
		return health;
	}	
	int getLevel(){
		return level;
	}
	
//	                                            setter()
	void setHealth(int h){
		health = h;
	}
	void setLevel(char ch){
		level = ch;
	}
	void setName(char name1[]){
		strcpy(this -> name, name1);    //copy string -->    # strcpy() #
	}
	
	//Destructor --- no return type, no parameters (~)
	~Hero(){
		cout<< "Destructor bhau !"<< endl;
	}
	
	void print(){
		cout << "health : " << this -> health << endl;
		cout << "level : " << this -> level << endl;
		cout << "name : " << this -> name << endl;
	}
	
};

int main()
{
	
//	static     -----> destructor called by default
	Hero h1;
	h1.setHealth(40);
	h1.setLevel('A');
	
	cout<<"health of h1 : "<< h1.getHealth() << endl;
	cout<<"level of h1 : "<< h1.level << endl;
	cout<<endl;
	
//	dynamically         -----> destructor must be called manually
	Hero *h2 = new Hero;
	h2 -> setHealth(60);
	h2 -> setLevel('B');
	
	cout<<"health of h2 : "<< h2 -> getHealth() << endl;
	cout<<"level of h2 : "<< h2 -> level << endl;
	delete h2;                                               //for destructor
	cout<<endl;
//
////	int a = sizeof(h1);
////	cout<<"size of object in class Hero : "<< a << endl;
//
//	Hero h3(55,'C');
//	h3.print();
//	cout<<endl;
//	
//	Hero h4(80);
//	h4.print();
//	cout<<endl;
//	
//	
//	//Copy Constructor
//	Hero S(70, 'A');
//	char name1[7] = "Suresh";
//	S.setName(name1);
//	S.print();
//	
//	Hero R(S);                   // ------>	R.health = S.health;   R.health = S.health;	
//	
//	S.name[0] = 'P';
//	S.print();
//	
//	R.print();

	

return 0;
}

