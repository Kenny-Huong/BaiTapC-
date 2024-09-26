#include <iostream>
#include <string>
using namespace std;

class Customer{
	public:
		string name;
		
			Customer()
		{
			
		}
		
		Customer(string name = " ")
		{
			this -> name = name;
		}
};

int main()
{
	Customer() s;
	cout << "Welcome to Codelearn.io!";
	return 0;
}