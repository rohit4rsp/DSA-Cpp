#include<iostream>
using namespace std;

int& func(int a) {
    int num = a;              // local variables only in this functn
    int& ans = num;                                                 // gives error
    return ans;
}

int* fun(int n) {
    int* ptr = &n;            // local variables only in this functn
    return ptr;                                                     // gives error
}

void update2(int& n) {
    n++;
}

void update1(int n) {
    n++;
}

int main() {

    /*
    int i = 5;
    //create a ref variable 
    int& j = i;
    cout << i << endl; 
    i++;
    cout << i << endl; 
    j++;
    cout << i << endl; 
    cout << j << endl;
    */

   int n = 5;
   
   cout << "Before " << n << endl;
   update2(n);
   cout << "After " << n << endl;


    fun(n);

    return 0;
}
